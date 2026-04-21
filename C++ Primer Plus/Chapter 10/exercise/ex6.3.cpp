#include <iostream>
#include "ex6.1.h"

int main()
{
    Move a1(1.4, 5.7);
    Move a2;
    Move a3(1.7, 8.3);
    a1.showmove();
    Move a4 (a2.add(a3));
    a4.showmove();
    Move a5 (a4.add(a1));
    a5.showmove();
}