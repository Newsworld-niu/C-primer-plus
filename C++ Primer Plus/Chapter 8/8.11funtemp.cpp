// funtemp.cpp -- using a function template
#include <iostream>
// function template prototype
template <typename T> // or class T
void Swap(T & a, T & b);

int main()
{
    int i = 10;
    int j = 20;
    std::cout << "i, j = " << i << ", " << j << ".\n";
    std::cout << "Using compiler-generated int swapper:\n";
    Swap(i,j);  // generates void Swap(int &, int &)
    std::cout << "Now i, j = " << i << ", " << j << ".\n";
    
    double x = 24.5;
    double y = 81.7;
    std::cout << "x, y = " << x << ", " << y << ".\n";
    std::cout << "Using compiler-generated double swapper:\n";
    Swap(x,y);
    std::cout << "Now x, y = " << x << ", " << y << ".\n";
    // cin.get();
}

// function template definition
template <typename T>   // or class T
void Swap(T &a, T &b)
{
    T temp;     // temp a variable of type T
    temp = a;
    a = b;
    b = temp;
}