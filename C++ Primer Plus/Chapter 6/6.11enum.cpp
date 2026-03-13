// enum.cpp -- using enum

#include <iostream>
// create named constants for 0 - 6
enum {red, orange, yellow, green, blue, violet, indigo};

int main()
{
    std::cout << "Enter color code (0-6): ";
    int code;
    std::cin >> code;
    while (code >= red && code <= indigo)
    {
        switch(code)
        {
            case red       : std::cout << "Her lips were red.\n"; break;
            case orange    : std::cout << "Her hair was orange.\n"; break;
            case yellow    : std::cout << "Her shoes were yellow.\n"; break;
            case green     : std::cout << "Her nails were green.\n"; break;
            case blue      : std::cout << "Her sweatsuit was blue.\n"; break;
            case violet    : std::cout << "Her eyes were violet.\n"; break;
            case indigo    : std::cout << "Her mood was indigo.\n"; break;     
        }
        std::cout << "Enter color code (0-6): ";
        std::cin >> code;
    }
    std::cout << "Bye\n";
    return 0;
}