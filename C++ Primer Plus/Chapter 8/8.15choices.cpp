// choices.cpp -- choosing a template
#include <iostream>

template<class T>  // or template <typename T>
T lesser(T a, T b)      // #1
{
    return a < b ? a : b;
}

int lesser(int a, int b)    // #2
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main()
{
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    std::cout << lesser(m, n) << std::endl;         // use #2
    std::cout << lesser(x, y) << std::endl;         // use #1 with double
    std::cout << lesser<>(m, n) << std::endl;       // use #1 with int
    std::cout << lesser<int>(x, y) << std::endl;    // use #1 with int
}