// secref.cpp -- defining and using a reference
#include <iostream>
int main()
{
    int rats = 101;
    int & rodents = rats;   // rodents is a reference

    std::cout << "rats = " << rats;
    std::cout << ", rodents = " << rodents << std::endl;

    std::cout << "rats address = " << &rats;
    std::cout << ", rodents address = " << &rodents << std::endl;

    int bunnies = 50;
    rodents = bunnies;      // can we change the reference?
    std::cout << "bunnies = " << bunnies;
    std::cout << ",rats = " << rats;
    std::cout << ", rodents = " << rodents << std::endl;

    std::cout << "bunnies address = " << &bunnies;
    std::cout << ", rodents address = " << &rodents << std::endl;
}