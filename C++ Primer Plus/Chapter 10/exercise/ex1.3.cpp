#include <iostream>
#include "ex1.1.h"

int main()
{
    Bank de1 = {"News", "2021", 100};
    de1.show();
    de1.deposite(100);
    de1.show();
    de1.withdraw(20);
    de1.show();
    de1.withdraw(200);
}