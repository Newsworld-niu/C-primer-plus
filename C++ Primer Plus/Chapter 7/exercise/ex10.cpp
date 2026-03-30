#include <iostream>

double add(double x, double y);
double multiple(double x, double y);
double calculate(double x, double y, double (*pt) (double, double));

int main()
{
    std::cout << "Enter pair of numbers: ";
    double x;
    double y;
    while (std::cin >> x >> y)
    {
        std::cout << calculate(x, y, add) << '\n';
        std::cout << calculate(x, y, multiple) << '\n';
        std::cout << "Enter pair of numbers: ";
        continue;
    }
}

double add(double x, double y)
{
    return x+y;
}

double multiple(double x, double y)
{
    return x * y;
}

double calculate(double x, double y, double (*pt)(double, double))
{
    double q = (*pt)(x, y);
    return q;
}