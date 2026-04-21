#ifndef EX4_H_
#define EX4_H_

#include <iostream>
namespace SALE{
    class Sales{
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales(const double ar[], int n);
        Sales();
        void showSales() const;
    };
};

#endif