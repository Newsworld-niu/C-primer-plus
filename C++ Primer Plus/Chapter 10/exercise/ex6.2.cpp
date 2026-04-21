#include <iostream>
#include "ex6.1.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x: " << x << '\n'
            << "y: " << y <<'\n';
}

Move Move::add(const Move & m) const
{
    double a1 = x + m.x;
    double a2 = y + m.y;
    return Move(a1, a2);
}

void Move::reset(double a, double b)
{
    x= a;
    y = b;
}