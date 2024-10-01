#include <cstdio>
#include <cstdint>
#include <cstring>

#include <boost/crc.hpp>

#define BUF_SIZE 9
#define CRC16_START_VALUE 0xFFFF // Start value CRC16 CCITT

// CRC-16 CCITT (False) parameters
const uint16_t crc16_ccitt_table[] = {
    0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50A5, 0x60C6, 0x70E7,
    0x8108, 0x9129, 0xA14A, 0xB16B, 0xC18C, 0xD1AD, 0xE1CE, 0xF1EF};

uint16_t crc16_ccitt(const uint8_t *data, size_t length)
{
    uint16_t crc = CRC16_START_VALUE;

    for (size_t i = 0; i < length; ++i)
    {
        uint8_t index = (crc >> 12) ^ (data[i] >> 4);
        crc = crc16_ccitt_table[index & 0x0F] ^ (crc << 4);
        index = (crc >> 12) ^ (data[i] & 0x0F);
        crc = crc16_ccitt_table[index & 0x0F] ^ (crc << 4);
    }

    return crc;
}

int main()
{
    uint8_t buffer[BUF_SIZE + 1];

    for (int i = 0; i < BUF_SIZE; i++)
    {
        buffer[i] = i;
    }

    uint16_t u16_crc1 = calc_crc_16_CCITT(buffer, BUF_SIZE);

    printf("crc:%x\r\n", u16_crc1);

    boost::crc_ccitt_false_t alg;
    alg.process_bytes(buffer, BUF_SIZE);

    uint16_t u16_crc2 = alg.checksum();

    printf("boost crc:%x\r\n", u16_crc2);

    uint16_t u16_crc3 = crc16_ccitt(buffer, BUF_SIZE);

    printf("crc:%x\r\n", u16_crc3);

    return 0;
}
