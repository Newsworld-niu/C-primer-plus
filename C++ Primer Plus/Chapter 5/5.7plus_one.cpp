// plus_one.cpp -- the increment operator
#include <iostream>
int main()
{
    int a = 20;
    int b = 20;
    std::cout << "a    = " << a << ":    b = " << b << std::endl;
    std::cout << "a++  = " << a++ << ":  ++b = " << ++b << std::endl;
    std::cout << "a    = " << a << ":    b = " << b << std::endl;
    return 0;
}