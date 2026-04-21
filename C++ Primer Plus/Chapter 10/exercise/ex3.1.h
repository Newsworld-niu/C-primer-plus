#ifndef EX3_H_
#define EX3_H_

#include <string>

class Golf
{
private:
    static const int Len = 40;
    std::string fullname;
    int handicap1;
public:
    Golf(const char * name, int hc);
    Golf();
    void handicap(int hc);
    void showgolf() const;
};

#endif