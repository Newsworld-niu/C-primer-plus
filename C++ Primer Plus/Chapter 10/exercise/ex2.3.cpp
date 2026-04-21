#include <iostream>
#include "ex2.1.h"

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FormalShow();
    two.FormalShow();
    two.Show();
    three.FormalShow();
    three.Show();
}