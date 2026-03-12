// not.cpp -- using the not operator
#include <iostream>
#include <climits>

bool is_int(double);
int main()
{
    double num;

    std::cout << "Yo,dude! Enter an integer value: ";
    std::cin >> num;
    while (!is_int(num))        // continue while num is not int-able
    {
        std::cout << "Out of range -- please try again: ";
        std::cin >> num;
    }
    int val = int (num);    // type cast
    std::cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}
bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)   // use climits values
        return true;
    else
        return false;
}