// twofile1.cpp -- variables with external and internal linkage
#include <iostream>     // to be compiled with file2.cpp
int tom =3;             // external variable definition
int dick = 30;          // external variable definition
static int harry = 300; // static, internal linkage

// function prototype
void remote_access();

int main()
{
    std::cout << "main() reports the following addresses:\n";
    std::cout << &tom << " = &tom, " << &dick << " = &dick, ";
    std::cout << &harry << " = &harry\n";
    remote_access();
}