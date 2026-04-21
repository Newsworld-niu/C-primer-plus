#include <iostream>
#include "ex4.1.h"

int main()
{
    SALE::Sales g2;
    double arr[3] = {2.2, 4.2, 6.8}; 
    SALE::Sales g1 (arr, 3);
    g1.showSales();
    g2.showSales();
}