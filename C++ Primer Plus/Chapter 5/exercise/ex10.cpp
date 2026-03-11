#include <iostream>
int main()
{
    std::cout << "Enter number of rows: ";
    int num;
    std::cin >> num;
    for (int i = num; i >= 1; --i)
    {
        for (int j = 1 ; j < i; ++j)
            std::cout << ".";
        for (int x = i; x <= num; x++)
            std::cout << "*";
        std::cout << std::endl;
    }
    return 0;
}