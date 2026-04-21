#include <cstring>
#include <iostream>
#include "ex2.1.h"

Person::Person(const std::string & ln, const char * fn)
{
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::Show() const
{
    std::cout << fname << ", " << lname << '\n';
}

void Person::FormalShow() const
{
    std::cout << lname << ", " << fname << '\n';
}