#include <iostream>
#include "ex1.1.h"

Bank::Bank(const std::string & na, const std::string & ac, const double ba)
{
    name = na;
    account = ac;
    balance = ba;
}

Bank::Bank()
{
    name = "";
    account = "0";
    balance = 0;
}

void Bank::show() const
{
    std::cout << "Depositor's name: " << name << "\n"
              << "Account number: " << account << "\n"
              << "Balance: " << balance << '\n';
}

void Bank::deposite(double my)
{
    if (my >= 0)
        balance += my;
    else
        std::cout << "Can not deposite negative number";
    }

void Bank::withdraw(double my)
{
    if (my > 0 and my < balance)
        balance -= my;
    else if (my <= 0)
        std::cout << "You can not withdraw nagetive number.";
    else
        std::cout << "Can not withdraw such money";
    }