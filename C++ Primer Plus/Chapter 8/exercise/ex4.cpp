#include <iostream>
#include <cstring>      // for strlen(), strcpy()

struct stringy{
    char * str;         // points to a string
    int ct;             // length of string (not counting '\0\)
};

void set(stringy & s1, const char ar[]);
void show(const stringy & s1, const int times = 1);
void show(char * ar, const int times = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
}

void set(stringy & s1, char ar[])
{
    s1.ct = strlen(ar);
    s1.str = new char[strlen(ar) + 1];
    strcpy(s1.str, ar);
}

void show(const stringy & s1, const int times)
{
    for (int i = 0; i < times; ++i)
        std::cout << s1.str << std::endl;
}

void show(char * ar, const int times)
{
    for (int i = 0; i < times; ++i)
        std::cout << ar << std::endl;
}