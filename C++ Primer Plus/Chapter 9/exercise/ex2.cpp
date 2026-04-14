// static.cpp -- using a static local variable
#include <iostream>
#include <string>

// function prototype
void strcount(const std::string str);

int main()
{
    std::string input;

    std::cout << "Enter a line:\n";
    getline(std::cin, input);
    while (!(input == " "))
    {
        strcount(input);
        std::cout << "Enter next line (empty line to quit):\n";
        getline(std::cin, input);
    }
    std::cout << "Bye\n";
}

void strcount(const std::string str)
{
    static int total = 0;   // static local variable
    int count = 0;          // automatic local variable

    std::cout << "\"" << str << "\" contains ";
    count = str.size();
    total += count;
    std::cout << count << " characters\n";
    std::cout << total << " characters total\n";
}