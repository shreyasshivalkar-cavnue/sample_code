#include <iostream>
#include <sstream>
#include <string>

using namespace std;

uint8_t kNumU8Param = 0;

struct param_st
{
    std::string name;
    std::string parameter;
    uint32_t value;
};

param_st paramU8_lut[] = {
    {"tm_interface_param", "tm_eth_active", 1},

    {"tm_interface_network_configuration", "tm_ip_addr_byte1", 0},
    {"tm_interface_network_configuration", "tm_ip_addr_byte2", 0},
    {"tm_interface_network_configuration", "tm_ip_addr_byte3", 0},
    {"tm_interface_network_configuration", "tm_ip_addr_byte4", 0},

    {"tm_interface_network_configuration", "tm_subnet_mask_byte1", 0},
    {"tm_interface_network_configuration", "tm_subnet_mask_byte2", 0},
    {"tm_interface_network_configuration", "tm_subnet_mask_byte3", 0},
    {"tm_interface_network_configuration", "tm_subnet_mask_byte4", 0},

    {"tm_interface_network_configuration", "tm_default_gw_byte1", 0},
    {"tm_interface_network_configuration", "tm_default_gw_byte2", 0},
    {"tm_interface_network_configuration", "tm_default_gw_byte3", 0},
    {"tm_interface_network_configuration", "tm_default_gw_byte4", 0},
};

int main(int argc, char *argv[])
{
    char dot;
    kNumU8Param = sizeof(paramU8_lut) / sizeof(paramU8_lut[0]);

    if (argc != 4)
    {
        cout << "Usage: " << argv[0] << " <ip_address> <subnet_mask> <gateway>" << endl;
        return 1;
    }

    // Parse and store IP address
    string ip(argv[1]);
    stringstream ipStream(ip);
    ipStream >> paramU8_lut[1].value >> dot >> paramU8_lut[2].value >> dot >> paramU8_lut[3].value >> dot >> paramU8_lut[4].value;

    // Parse and store subnet mask
    string subnet(argv[2]);
    stringstream subnetStream(subnet);
    subnetStream >> paramU8_lut[5].value >> dot >> paramU8_lut[6].value >> dot >> paramU8_lut[7].value >> dot >> paramU8_lut[8].value;

    // Parse and store gateway address
    string gateway(argv[3]);
    stringstream gatewayStream(gateway);
    gatewayStream >> paramU8_lut[9].value >> dot >> paramU8_lut[10].value >> dot >> paramU8_lut[11].value >> dot >> paramU8_lut[12].value;

    for (uint8_t i = 0; i < kNumU8Param; i++)
    {
        printf("%s:%s:%d\n", paramU8_lut[i].name.c_str(),
               paramU8_lut[i].parameter.c_str(), paramU8_lut[i].value);
    }

    return 0;
}
