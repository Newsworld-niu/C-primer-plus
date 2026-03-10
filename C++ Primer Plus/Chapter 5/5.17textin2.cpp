// textin2.cpp -- usinng cin.get(char)
#include <iostream>
int main()
{
    char ch;
    int count = 0;

    std::cout << "Enter characters; enter # to quit:\n";
    std::cin.get(ch);          // use the cin.get(char) function
    while (ch != '#')
    {
        std::cout << ch;
        ++count;
        std::cin.get(ch);           // use it again
    }
    std::cout << std::endl << count << " characters read\n";
    return 0;
}