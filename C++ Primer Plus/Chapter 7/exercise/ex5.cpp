#include <iostream>

long long factorial(unsigned n);

int main()
{
    std::cout << "Enter a number: ";
    unsigned n;
    while (std::cin >> n)
    {
        std::cout << n << "!: " << factorial(n) << std::endl;
        std::cout << "Next number(enter q to quit): ";
    };
}

long long factorial(unsigned n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}