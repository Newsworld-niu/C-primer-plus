// dowhile.cpp -- exit-condition cpp
#include <iostream>
int main()
{
    int n;
    std::cout << "Enter numbers in the range 1-10 to find ";
    std::cout << "my favorite number\n";
    do
    {
        std::cin >> n;          //execute n
    } while (n != 7);           // then test
    std::cout << "Yes, 7 is my favorite.\n";
    return 0;
}