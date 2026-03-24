// fun_ptr.cpp -- pointers to functions
#include <iostream>
double betsy(int);
double pam(int);

// second argument is pointer to a type double function that
// takes a type int argument
void estimate(int lines, double (*pt)(int));

int main()
{
    int code;
    std::cout << "How many lines of code do you need? ";
    std::cin >> code;
    std::cout << "Here's Betsy's estimate:\n";
    estimate(code, betsy);
    std::cout << "Here's Pam's estimate:\n";
    estimate(code, pam);
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    std::cout << lines << " lines will take ";
    std::cout << (*pf)(lines) << " hour(s)\n";
}
