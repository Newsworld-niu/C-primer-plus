// twotemps.cpp  -- using overloaded template functions
#include <iostream>

const int Lim = 8;

template <typename T>       // original template
void Swap(T &a, T &b);

template <typename T>       // new template
void Swap(T *a, T *b, int n);

void Show(int a[]);

int main()
{
    int i = 10, j = 20;
    std::cout << "i, j = " << i << ", " << j << ".\n";
    std::cout << "Using compiler-generated int swapper:\n";
    Swap(i,j);              // matches original template
    std::cout << "Now i, j = " << i << ", " << j << ".\n";

    int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
    std::cout << "Original arrays:\n";
    Show(d1);
    Show(d2);
    Swap(d1, d2, Lim);      // matched new template
    std::cout << "Swapped arrays:\n";
    Show(d1);
    Show(d2);
    // cin.get();
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
    T temp;
    for (int i = 0; i < n; ++i)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[])
{
    std::cout << a[0] << a[1] << "/";
    std::cout << a[2] << a[3] << "/";
    for (int i = 4; i < Lim; ++i)
        std::cout << a[i];
    std::cout << std::endl;
}