// firstref.cpp -- defining and using a reference
#include <iostream>
int main()
{
    int rats = 101;
    int & rodents = rats;   // rodents is a reference
    std::cout << "rats = " << rats;
    std::cout << ", rodents = " << rodents << std::endl;
    ++rodents;
    std::cout << "rats = " << rats;
    std::cout << ", rodents = " << rodents << std::endl;

// some implementations require type casting the following
// addresses to type unsigned
    std::cout << "rats address = " << &rats;
    std::cout << ", rodents address = " << &rodents << std::endl;
}