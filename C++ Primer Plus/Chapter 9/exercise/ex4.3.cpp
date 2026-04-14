#include <iostream>
#include "ex4.1.h"
using namespace SALES;
int main()
{
    Sales g1, g2;
    double arr[3] = {2.2, 4.2, 6.8}; 
    setSales(g1, arr, 3);
    setSales(g2);
    showSales(g1);
    showSales(g2);
}