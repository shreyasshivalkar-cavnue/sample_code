// C++ program to demonstrate the use of auto_ptr
// C++ program to illustrate the use of auto_ptr
#include <iostream>
#include <cstdio>
#include <cstring>
#include <memory>
#include <chrono>
#include <ctime>
using namespace std;

constexpr uint8_t kI2cFileNameLength = 20;

class A
{
private:
    char i2c_fname[kI2cFileNameLength] = "";
    uint8_t i2c_bme_address = 0;
    uint64_t start;

public:
    A()
    {
        start = std::chrono::duration_cast<std::chrono::microseconds>(
                    std::chrono::high_resolution_clock::now().time_since_epoch())
                    .count();
        cout << "start:" << start << endl;
    }

    ~A()
    {
        cout << "end" << endl;
    }

    void show()
    {
        cout << "bme addr:" << static_cast<int>(i2c_bme_address) << endl;
        cout << "bme i2c bus:" << i2c_fname << endl;
    }

    void set_bme_address(uint8_t bme_address)
    {
        i2c_bme_address = bme_address;
    }

    void set_i2c_file(const char *s)
    {
        strncpy(i2c_fname, s, kI2cFileNameLength - 1);
        i2c_fname[kI2cFileNameLength - 1] = '\0';
    }

    void performReading()
    {
        if (i2c_bme_address == 0x76)
        {
            cout << "{\"temperature\":28.5467, \"humidity\":21.5627, \"pressure\":102026}" << endl;
        }
        else if (i2c_bme_address == 0x77)
        {
            cout << "{\"temperature\":25.4356, \"humidity\":28.2288, \"pressure\":102070}" << endl;
        }
        else
        {
            cout << "{\"temperature\":25.4356, \"humidity\":28.2288, \"pressure\":102070}" << endl;
        }
    }
};

int main(int argc, char *argv[])
{
    std::unique_ptr<A> p1(new A());

    // for (uint8_t i = 1; i < argc; i++)
    // {
    //     if (strcmp(argv[i], "-b") == 0)
    //     {
    //         p1->set_i2c_file(argv[i + 1]);
    //     }

    //     if (strcmp(argv[i], "-a") == 0)
    //     {
    //         p1->set_bme_address(std::stoi(argv[i + 1]));
    //     }
    // }

    // p1 is an auto_ptr of type A
    // auto_ptr<A> p1(new A);
    // p1->show();
    p1->performReading();

    return 0;
}
