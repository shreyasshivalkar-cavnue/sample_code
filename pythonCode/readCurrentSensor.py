import subprocess


def _get_current(self_reading, a, b):
    # Forge/Orin current = ((ADC Count/1024)*3)/50)/0.01 or ((ADC Count/1024)*3)/50)*100
    # Heater Load Current = ((ADC Count/1024)*3)/200)*12000
    return (((self_reading / self.MAX_RANGE) * self.VREF) / a) * b


def read_forge_current_reading():
    raw_val = 1024
    ch_path = "/sys/bus/iio/devices/iio\:device1/in_voltage4_raw"
    cmd = f"sudo cat {ch_path}"
    status = subprocess.run(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if status.returncode != 0:
        print(f"Failed to read err:{status.stderr}")
    else:
        raw_val = int(status.stdout)
    return raw_val


def read_heater_current_reading():
    raw_val = 1024
    ch_path = "/sys/bus/iio/devices/iio\:device1/in_voltage4_raw"
    cmd = f"sudo cat {ch_path}"
    status = subprocess.run(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if status.returncode != 0:
        print(f"Failed to read err:{status.stderr}")
    else:
        raw_val = int(status.stdout)
    return raw_val


if __name__ == "__main__":
    print("raw_forge, raw_heater, current-forge, current-heater")
    for x in range(0, 20):
        raw_forge = read_forge_current_reading()
        raw_heater = read_heater_current_reading()
        print(f"{raw_forge}, {raw_heater}, {_get_current(raw_forge, 50, 100)}, {_get_current(raw_heater,200, 12_000)}")
