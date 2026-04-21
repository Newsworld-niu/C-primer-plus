#ifndef EX1_H_
#define EX1_H_
#include <string>

class Bank
{
private:
    std::string name;
    std::string account;
    double balance;
public:
    Bank(const std::string & na, const std::string & ac, const double ba);
    Bank();
    void show() const;
    void deposite(double my);
    void withdraw(double my);
};

#endif