#include <iostream>
int main()
{
    int sum = 0;
    std::cout << "Enter a number: ";
    int i;
    std::cin >> i;
    while (i != 0)
    {
        sum += i;
        std::cout << "Enter a new number: ";
        std::cin >> i;
    }
    std::cout << "The sum: " << sum ;
    return 0;
}