// arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
// constant data
const int Seasons = 4;
const char * Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(double * ar);
// function that uses array objet without modifying it
void show(double ar[]);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double * ar)
{
    for (int i = 0; i < Seasons; ++i)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> ar[i];
    }
}

void show(double ar [])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i)
    {
        std::cout << Snames[i] << ": $" << ar[i] << std::endl;
        total += ar[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}