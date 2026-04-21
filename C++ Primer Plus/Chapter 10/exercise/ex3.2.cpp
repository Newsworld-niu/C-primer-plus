#include <iostream>
#include "ex3.1.h"

Golf::Golf(const char * name, int hc)
{
    fullname = name;
    handicap1 = hc;
}

Golf::Golf()
{
    std::cout << "Enter your name: " << "\n";
    char name[Len];
    std::cin.getline(name, Len);
    std::cout << "Enter your number: " << "\n";
    int handi;
    std::cin >> handi;
    std::cin.get();
    *this = Golf(name, handi);
}

void Golf::handicap(int hc)
{
    handicap1 = hc;
}

void Golf::showgolf() const
{
    std::cout << "Name: " << fullname << "\n";
    std::cout << "Handicap: " << handicap1 << "\n";
}
