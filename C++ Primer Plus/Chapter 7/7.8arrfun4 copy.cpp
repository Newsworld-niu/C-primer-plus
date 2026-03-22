// arrfun4.cpp -- functions with an array range
#include <iostream>
const int Arsize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
    using std::cout;
    using std::cin;
    int cookies[Arsize] = {1,2,4,8,16,32,64,128};
// some systems require preceding int with static to
// enaale array initialization

    int sum = sum_arr(cookies, cookies + Arsize);
    cout << "123Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, cookies + 3);    // first 3 element
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, cookies + 8);    // last 4 elements
    cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

// return the sum of an integer array
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; ++pt)
        total += *pt;
    return total;
}
// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
// function prototypes
int fill_array(double ar[],int limit);
void show_array(const double ar[], int n);  // don't change data
void revalue(double r, double ar[], int n);

using std::cout;
using std::cin;

int main()
{
    double