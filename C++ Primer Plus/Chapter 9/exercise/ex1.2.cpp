#include <iostream>
#include <cstring>
#include "ex1.1.h"

void setgolf(golf & g, const char * name, int hc)
{
    if (strlen(name) >= Len)
    {
        strncpy(g.fullname, name, Len - 1);
        g.fullname[Len - 1] = '\0';
    }
    else
        strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    std::cout << "Enter your name: " << "\n";
    char name[Len];
    std::cin.getline(name, Len);
    if (name[0] == '\0')
        return 0;
    else
    {
        std::cout << "Enter your number: " << "\n";
        int handi;
        std::cin >> handi;
        std::cin.get();
        setgolf(g, name, handi);
        return 1;
    }
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << "Name: " << g.fullname << "\n";
    std::cout << "Handicap: " << g.handicap << "\n";
}