#!/usr/bin/env python3

# https://docs.nvidia.com/jetson/archives/r34.1/DeveloperGuide/text/HR/JetsonEepromLayout.html
import argparse
import subprocess
import re

FIELD_MAP = {
    0: "Major version number",
    1: "Minor version number",
    2: "Length LSB",
    3: "Length MSB",
    19: "Number of Ethernet MAC address",
    20: "Serial start",
    49: "serial end",
    68: "Gigabit ethernet mac start",
    74: "Product serial start",
    88: "Product serial end",
    172:"Customer Gigabit Eth Mac start",
    178:"Customer Number of Eth Macs"
}
def AddToCRC(b, crc):
    b2 = b
    if (b < 0):
        b2 = b + 256
    for i in range(8):
        odd = ((b2^crc) & 1) == 1
        crc >>= 1
        b2 >>= 1
        if (odd):
            crc ^= 0x8C # This means crc ^= 140.
    return crc

EEPROM_LENGTH = 256
I2C_ADDRESS = 0x50

def parse_file(file_name:str):
    with open(file_name, "rb") as fp:
        byte_stream = fp.read()
    crc=0
    i = 0
    for b in byte_stream[:-1]:
        crc = AddToCRC(b,crc)
        field_name = FIELD_MAP[i] if i in FIELD_MAP else ""
        print(f"{i:03}: {b:2X} {b:3d} {chr(b)} - {field_name}")
        i += 1
    print()
    print(f"CRC in eeprom file: {byte_stream[-1]:X} / {byte_stream[-1]}")

    print(f"Calculated CRC: 0x{crc:X} / {crc}")

def check_on_i2c_bus(bus:int):
    i2c_bus = int(bus)
    cmd = f"sudo i2ctransfer -y {i2c_bus} w1@{I2C_ADDRESS} 0 r{EEPROM_LENGTH}"
    output = subprocess.getoutput(cmd)
    data = output.split()
    crc=0
    for i in range(EEPROM_LENGTH-1):
        num = int(data[i],16)
        crc = AddToCRC(num, crc)
        print(f"{i:2}: {num:3} {hex(num)} {chr(num)}")
    print(f"calculated CRC: {hex(crc)}, read crc: {data[EEPROM_LENGTH-1]}")

def check_i2c_dump_text(s:str):
    lines = s.split('\n')
    # print(lines)
    byte_pattern=r"([0-9a-f]{2,2})"
    bytes_pattern=(byte_pattern+r"\s")*16
    pattern=f"{byte_pattern}:\s{bytes_pattern}"
    data=[]
    crc=0
    for line in lines:
        m = re.search(pattern, line)
        if m:
            for i in range(2,18):
                data.append(int(m.group(i),16))
    i = 0
    for b in data[:-1]:
        crc = AddToCRC(b,crc)
        field_name = FIELD_MAP[i] if i in FIELD_MAP else ""
        print(f"{i:03}: {b:2X} {b:3d} {chr(b)} - {field_name}")
        i += 1
    print(f"calculated CRC: {hex(crc)}, read crc: {hex(data[EEPROM_LENGTH-1])}")
def main():
    parser = argparse.ArgumentParser()
    mgroup = parser.add_mutually_exclusive_group()
    mgroup.add_argument("--file", "-f", help="filename", default=None)
    mgroup.add_argument("--bus", "-b", help="i2c bus instead of file", default=None )
    mgroup.add_argument("--i2c_dump", "-i", help="i2c dump txt", default=None)
    args = parser.parse_args()
    if args.file is not None:
        parse_file(args.file)
    elif args.bus is not None:
        check_on_i2c_bus(args.bus)
    else:
        with open(args.i2c_dump, "r") as f:
            output = f.read()
            check_i2c_dump_text(output)



if __name__ == "__main__":
    main()
