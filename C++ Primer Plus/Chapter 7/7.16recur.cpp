// recur.cpp -- using recursion
#include <iostream>
void countdown(int n);

int main()
{
    countdown(4);           // call the recursive function
    return 0;
}

void countdown(int n)
{
    std::cout << "Counting down ... " << n << std::endl;
    if (n>0)
        countdown(n-1);     // function calls itself
    std::cout << n << ": Kaboom!\n";
}