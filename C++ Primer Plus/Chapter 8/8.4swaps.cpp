// swaps.cpp -- swapping with references and with pointers
#include <iostream>
void swapr(int & a, int & b);   // a, b are aliases for ints
void swapp(int * a, int * b);   // p, q are addresses of ints
void swapv(int a, int b);       // a, b are new variables

int main()
{
    int wallet1 = 300;
    int wallet2 = 350;

    std::cout << "wallet1 = $" << wallet1;
    std::cout << " wallet2 = $" << wallet2 << std::endl;

    std::cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);    // pass variables
    std::cout << "wallet1 = $" << wallet1;
    std::cout << " wallet2 = $" << wallet2 << std::endl;

    std::cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2);  // pass addresses of variables
    std::cout << "wallet1 = $" << wallet1;
    std::cout << " wallet2 = $" << wallet2 << std::endl;

    std::cout << "Trting to ues passing by value:\n";
    swapv(wallet1, wallet2);    // pass values of variables
    std::cout << "wallet1 = $" << wallet1;
    std::cout << " wallet2 = $" << wallet2 << std::endl;
}

void swapr(int & a, int & b)    // use references
{
    int temp;

    temp = a;       // use a, b for values of variables
    a = b;
    b = temp;
}

void swapp(int * p, int * q)    // use pointers
{
    int temp;

    temp = *p;  // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)    // try using values
{
    int temp;

    temp = a;   // use a, b for values of variables
    a = b;
    b = temp;
}