// tempover.cpp -- template overloading
#include <iostream>

template <typename T>       // template A(T 类型的数组 或 指向 T 的指针)
void ShowArray(T arr[], int n);

template <typename T>       // template B(指向 T 的指针的数组 或 指向指针的指针)
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

// set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; ++i)
        pd[i] = &mr_E[i].amount;
    
    std::cout << "Listing Mr. E's counts of things:\n";
// things is an array of int
    ShowArray(things, 6);   // uses template A
    std::cout << "Listing Mr. E's debts:\n";
// pd is an array of pointers to double
    ShowArray(pd, 3);       // uses template B (more specialized)
}

template <typename T>
void ShowArray(T arr[], int n)
{
    std::cout << "template A\n";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}

template <class T>
void ShowArray(T * arr[], int n)
{
    std::cout << "template B\n";
    for (int i = 0; i < n; ++i)
        std::cout << *arr[i] << ' ';
    std::cout << std::endl;
}