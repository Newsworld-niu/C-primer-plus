#include <iostream>

double harmonic_mean(double a, double b)
{
    return 2.0 * a * b / (a + b);
}

int main()
{
    double x,y;
    std::cout << "Enter pair of numbers(0 to quit): ";
    while ((std::cin >> x >> y) && ((x*y) != 0))
    {
        double result = harmonic_mean(x, y);
        std::cout << "The harmonic mean of x and y: " << result << std::endl;
        std::cout << "Next enter pair of numbers: ";
    }
}