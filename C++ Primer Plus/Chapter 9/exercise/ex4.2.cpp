#include <iostream>
#include "ex4.1.h"
using namespace SALES;

void SALES::setSales(Sales & s, const double ar[], int n)
{
    for (int i = 0; i < QUARTERS; i++)
        s.sales[i] = 0;
    double summ = 0;
    double maxni = ar[0];
    double minni = ar[0];
    if (n <= QUARTERS)
    {
        int count = 0;
        for (int i = 0; i < n; ++i)
            {
                s.sales[i] = ar[i];
                summ += ar[i];
                if (ar[i] >= maxni)
                    maxni = ar[i];
                if (ar[i] <= minni)
                    minni = ar[i];
                ++count;
            }
        s.average = summ / count;
        s.max = maxni;
        s.min = minni;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < QUARTERS; ++i)
            {
                s.sales[i] = ar[i];
                summ += ar[i];
                if (ar[i] >= maxni)
                    maxni = ar[i];
                if (ar[i] <= minni)
                    minni = ar[i];
                ++count;
            }
        s.average = summ / count;
        s.max = maxni;
        s.min = minni;
    }
}

void SALES::setSales(Sales & s)
{
    double sum = 0;
    double max = 0;
    double min;
    double average = 0;
    int count = 0;
    for (int i = 0; i < QUARTERS; ++i)
    {
        std::cout << "Enter " << i+1 << " number: ";
        std::cin >> s.sales[i];
        std::cin.get();
        sum += s.sales[i];
        if (s.sales[i] >= max)
            max = s.sales[i];
        ++count;
    }
    min = s.sales[0];
    for (int i = 0; i < QUARTERS; ++i)
    {
        if (s.sales[i] <= min)
            min = s.sales[i];
    }
    s.average = sum / count;
    s.max = max;
    s.min = min;
}

void SALES::showSales(const Sales & s)
{
    std::cout << "Average: " << s.average << '\n';
    std::cout << "Max: " << s.max << '\n';
    std::cout << "Min: " << s.min << "\n";
}