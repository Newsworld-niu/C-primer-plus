// arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
// constant data
const int Seasons = 4;
const char * Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};

struct Expenses
{
    double expenses[Seasons];
};

// function to modify array object
void fill(Expenses * exp);
// function that uses array objet without modifying it
void show(Expenses * exp);

int main()
{
    Expenses expense;
    Expenses * exp = &expense;
    fill(exp);
    show(exp);
    return 0;
}

void fill(Expenses * exp)
{
    for (int i = 0; i < Seasons; ++i)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> exp->expenses[i];
    }
}

void show(Expenses * exp)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i)
    {
        std::cout << Snames[i] << ": $" << exp->expenses[i] << std::endl;
        total += exp->expenses[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}