// inline.cpp -- using an inline function
#include <iostream>

// an inline function definition
inline double square(double x) { return x * x;}

int main()
{
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);  // can pass expressions
    std::cout << "a = " << a << ", b = "  << b << "\n";
    std::cout << "c = " << c;
    std::cout << ", c squared = " << square(c++) << "\n";
    std::cout << "Now c = " << c << "\n";
}