// static.cpp -- using a static local variable
#include <iostream>
// constants
const int Arsize = 10;

// function prototype
void strcount(const char * str);

int main()
{
    char input[Arsize];
    char next;

    std::cout << "Enter a line:\n";
    std::cin.get(input, Arsize);
    while (std::cin)
    {
        std::cin.get(next);
        while (next != '\n')    // string didn't fit!
            std::cin.get(next);     // dispose of remainder
        strcount(input);
        std::cout << "Enter next line (empty line to quit):\n";
        std::cin.get(input, Arsize);
    }
    std::cout << "Bye\n";
}

void strcount(const char * str)
{
    static int total = 0;   // static local variable
    int count = 0;          // automatic local variable

    std::cout << "\"" << str << "\" contains ";
    while (*str++)      // go to end of string
        ++count;
    total += count;
    std::cout << count << " characters\n";
    std::cout << total << " characters total\n";
}