// textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
    char ch ;
    int count = 0;
    std::cin.get(ch);          // attemp to read a char
    while (std::cin.fail() == false)        // test for EOF
    {
        std::cout << ch;        // echo character
        ++count;
        std::cin.get(ch);       // attemp to read another char
    }
    std::cout << std::endl << count << " characters read\n";
    return 0;
}