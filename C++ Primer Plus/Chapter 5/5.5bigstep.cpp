// bigstep.cpp -- count as directed

#include<iostream>
int main()
{
    std::cout << "Enter an integer: ";
    int by;
    std::cin >> by;
    std::cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by)
        std::cout << i << std::endl;
    return 0;
}