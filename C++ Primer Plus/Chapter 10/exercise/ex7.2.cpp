#include <iostream>
#include <cstring>
#include "ex7.1.h"

Plorg::Plorg(const char * na, int Ci)
{
    if (strlen(na) >= Len)
    {
        strncpy(name, na, Len - 1);
        name[Len - 1] = '\0';
    }
    else
        strcpy(name, na);

    CI = Ci;
}

void Plorg::Chang_ci(int ci)
{
    CI = ci;
}

void Plorg::show() const
{
    std::cout << "Name: " << name << "\n";
    std::cout << "CI: " << CI << '\n';
}