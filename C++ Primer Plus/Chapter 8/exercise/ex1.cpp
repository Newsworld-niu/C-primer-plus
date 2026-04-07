#include <iostream>

void silly(const char * name, int n = 0);

int main()
{
    silly("Hello");
    silly("World", 1);
    silly("Again");
    silly("last", 5);
}

void silly(const char * name, int n)
{
    static int callCount = 0;
    ++ callCount;

    if (n == 0)
        std::cout << name << std::endl;
    else
    {
        for (int i = 0; i < callCount; ++i)
            std::cout << name << std::endl;
    }
}