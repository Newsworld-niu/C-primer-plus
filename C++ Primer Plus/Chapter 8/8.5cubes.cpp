// cubes.cpp -- regular and reference arguments
#include <iostream>
double cube(double a);
double refcube(double &ra);

int main()
{
    double x = 3.0;

    std::cout << cube(x);
    std::cout << " = cube of " << x << std::endl;
    std::cout << refcube(x);
    std::cout << " = cube of " << x << std::endl; 
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double &ra)
{
    ra *= ra * ra;
    return ra;
}