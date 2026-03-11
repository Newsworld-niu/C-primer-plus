// ifelseif.cpp -- using if else if else
#include <iostream>
const int Fave = 27;
int main()
{
    int n;

    std::cout << "Enter a number in the range 1-100 to find ";
    std::cout << "my favorite number: ";
    do
    {
        std::cin >> n;
        if (n < Fave)
            std::cout << "Too low -- guess again: ";
        else if (n > Fave)
            std::cout << "Too high -- guess again: ";
        else
            std::cout << Fave << " is right!\n";
    } while (n != Fave);
    return 0;
}