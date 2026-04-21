#include <iostream>
#include "ex4.1.h"

SALE::Sales::Sales(const double ar[], int n)
{
    for (int i = 0; i < QUARTERS; i++)
        sales[i] = 0;
    double summ = 0;
    double maxni = ar[0];
    double minni = ar[0];
    if (n <= QUARTERS)
    {
        int count = 0;
        for (int i = 0; i < n; ++i)
            {
                sales[i] = ar[i];
                summ += ar[i];
                if (ar[i] >= maxni)
                    maxni = ar[i];
                if (ar[i] <= minni)
                    minni = ar[i];
                ++count;
            }
        average = summ / count;
        max = maxni;
        min = minni;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < QUARTERS; ++i)
            {
                sales[i] = ar[i];
                summ += ar[i];
                if (ar[i] >= maxni)
                    maxni = ar[i];
                if (ar[i] <= minni)
                    minni = ar[i];
                ++count;
            }
        average = summ / count;
        max = maxni;
        min = minni;
    }
}

SALE::Sales::Sales()
{
    double summ = 0;
    double maxm = 0;
    double minm;
    double averagem = 0;
    int count = 0;
    for (int i = 0; i < QUARTERS; ++i)
    {
        std::cout << "Enter " << i+1 << " number: ";
        std::cin >> sales[i];
        std::cin.get();
        summ += sales[i];
        if (sales[i] >= maxm)
            maxm = sales[i];
        ++count;
    }
    minm = sales[0];
    for (int i = 0; i < QUARTERS; ++i)
    {
        if (sales[i] <= minm)
            minm = sales[i];
    }
    average = summ / count;
    max = maxm;
    min = minm;
}

void SALE::Sales::showSales() const
{
    std::cout << "Average: " << average << '\n';
    std::cout << "Max: " << max << '\n';
    std::cout << "Min: " << min << "\n";
}