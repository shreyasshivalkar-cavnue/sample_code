#include <thread>
#include <cstdio>
#include <functional>

class myclass
{
public:
    void fun1()
    {
        printf("fun1()\n");
    }
    void fun2(int i)
    {
        printf("fun2(%d)\n", i);
    }

    void testit()
    {
        std::thread myThread(&myclass::fun1, this);

        myThread.join();
    }
};

int main(int argc, char *argv[])
{
    myclass mc;
    mc.testit();
    return 0;
}
