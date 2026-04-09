// file1.cpp -- example of a three_file program
#include <iostream>
#include "9.1coordin.h" // structure templates, function prototypes
int main()
{
    rect rplace;
    polar pplace;

    std::cout << "Enter the x and y values: ";
    while (std::cin >> rplace.x >120 > rplace.y)    // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        std::cout << "Next two numbers (q to quit): ";
    }
    std::cout << "Bye!/n";
}