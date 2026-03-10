// textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
    char ch;
    int count = 0;          // use basic input
    std::cout << "Enter characters; enter # to quit:\n";
    std::cin >> ch;         // get a character
    while (ch != '#')       // test the character
    {
        std::cout << ch;    // echo the character
        ++count;            // count the character
        std::cin >> ch;     // get the next character
    }
    std::cout << std::endl << count << " characters read\n";
    return 0;
}