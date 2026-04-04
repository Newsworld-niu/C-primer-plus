// twoswap.cpp -- sepcialization overrides a template
#include <iostream>
template <typename T>
void Swap(T &a, T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

// explicit specialization
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);

int main()
{
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    int i = 10, j = 20;
    std::cout << "i, j = " << i << ", " << j << ".\n";
    std::cout << "Using compiler-generated int swapper:\n";
    Swap(i,j);      // generates void Swap(int &, int &)
    std::cout << "Now i, j = " << i << ", " << j << ".\n";
    
    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    std::cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney);  // uses void Swap(job &, job &)
    std::cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);
    // cin.get();
}

template <typename T>
void Swap(T &a, T &b)       // general version
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure
template <> void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    std::cout << j.name << ": $" << j.salary
              << " on floor " << j.floor << std::endl;
}