#include <iostream>
#include <array>
const int Arsize = 100;
int main()
{
    std::array <long double, Arsize> mutiple;
    mutiple[0] = 1;
    for (int i = 1; i < Arsize; ++i)
        mutiple[i] = i * mutiple[i-1];
    for (int i = 0; i < Arsize; ++i)
        std::cout << i << "! = " << mutiple[i] << std::endl;
    return 0;
}