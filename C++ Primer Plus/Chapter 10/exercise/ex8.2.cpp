#include <iostream>
#include "ex8.1.h"

List::List()
{
    top = 1;
}

void List::add(Item & item)
{
    if (top <= Len)
    {
        items[top-1] = item;
        ++top;
    }
    else
        std::cout << "Out the scope";
}

bool List::isempty() const
{
    if (top == 0)
        return 1;
    else
        return 0;
}

bool List::isfull() const
{
    if (top == Len)
        return 1;
    else
        return 0;
}

void List::visit (void (*pf) (Item &))
{
    for (int i = 0; i < top; ++i)
        pf(items[i]);
}

void List::show() const
{
    for (int i = 0; i < top; ++i)
        std::cout << i << ": " << items[i] << '\n';
}