#include <fstream>
#include <iostream>
#include <sstream>

#include "rapidjson/document.h"
#include "rapidjson/filereadstream.h"

using namespace rapidjson;
using namespace std;

int main() {
    // Open the JSON file
    ifstream ifs("data.json");
    if (!ifs.is_open()) {
        cerr << "Error opening JSON file." << endl;
        return 1;
    }

    // Read the JSON file into a string
    stringstream buffer;
    buffer << ifs.rdbuf();
    string jsonStr = buffer.str();

    // Parse the JSON string into a RapidJSON document
    Document ipAddr;
    if (ipAddr.Parse(jsonStr.c_str()).HasParseError()) {
        cerr << "Error parsing JSON." << endl;
        return 1;
    }

    std::string keys[] = {"ipAddress", "subnetmask", "gateway"};

    // Accessing elements in the parsed JSON
    if (ipAddr.IsObject()) {
        // if (ipAddr.HasMember("ipAddress") && ipAddr["ipAddress"].IsString()) {
        //     cout << "ipAddress: " << ipAddr["ipAddress"].GetString() << endl;
        // }

        for (auto &k : keys) {
            if (ipAddr.HasMember(k.c_str()) && ipAddr[k.c_str()].IsString()) {
                cout << k.c_str() << ": " << ipAddr[k.c_str()].GetString() << endl;
            }
        }
    }

    return 0;
}
