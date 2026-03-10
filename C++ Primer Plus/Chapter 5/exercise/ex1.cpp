#include <iostream>
int main()
{
    std::cout << "Enter first number: ";
    int x;
    std::cin >> x;

    std::cout << "Enter second number; ";
    int y;
    std::cin >> y;

    int sum = 0;
    for (int i = x; i <= y; i ++)
        sum += i;
    std::cout << "The sum: " << sum << "\n";
    return 0; 
}