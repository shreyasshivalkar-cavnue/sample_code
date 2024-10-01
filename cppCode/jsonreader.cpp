#include <fstream>
#include <iostream>

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
    Document document;
    if (document.Parse(jsonStr.c_str()).HasParseError()) {
        cerr << "Error parsing JSON." << endl;
        return 1;
    }

    // Accessing elements in the parsed JSON
    if (document.IsObject()) {
        if (document.HasMember("name") && document["name"].IsString()) {
            cout << "Name: " << document["name"].GetString() << endl;
        }

        if (document.HasMember("age") && document["age"].IsInt()) {
            cout << "Age: " << document["age"].GetInt() << endl;
        }

        if (document.HasMember("languages") && document["languages"].IsArray()) {
            cout << "Languages:" << endl;
            const Value& languages = document["languages"];
            for (SizeType i = 0; i < languages.Size(); i++) {
                cout << "- " << languages[i].GetString() << endl;
            }
        }
    }

    return 0;
}
