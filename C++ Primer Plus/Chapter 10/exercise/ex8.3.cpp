#include "ex8.1.h"
#include <iostream>

void moins(Item & item);

int main()
{
    List list1;
    double a;
    while (!list1.isfull())
    {
        std::cout << "Number: ";
        std::cin >> a;
        std::cin.get();
        list1.add(a);
    }
    list1.visit(moins);
    list1.show();
}

void moins(Item & item)
{
    item -= 1;
}