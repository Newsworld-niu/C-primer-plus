// textin4.cpp -- reading chars with cin.get()
#include <iostream>
int main(void)
{
    int ch ;         // should be int,not char
    int count = 0;

    while((ch = std::cin.get()) != EOF)     // test for end-of-file
    {
        std::cout.put(ch);
        std::cin.clear();
        ++count;
    }
    std::cout << std::endl << count << " characters read\n";
    return 0;
}