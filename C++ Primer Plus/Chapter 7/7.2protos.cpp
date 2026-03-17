// protos.cpp -- using prototypes and function calls
#include <iostream>
void cheers(int);       // prototype: no return value
double cube(double y);  // prototype: returns a double
int main()
{
    cheers(5);          // function call
    std::cout << "Give me a number: ";
    double side;
    std::cin >> side;
    double volume = cube(side);     // function call
    std::cout << "A " << side << "-foot cube has a volume of ";
    std::cout << volume << " cubic feet.\n";
    cheers(cube(2));        // prototype protection at work
    return 0;
}

void cheers(int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << "Cheers! ";
    std::cout << std::endl;
}

double cube(double x)
{
    return x * x * x;
}