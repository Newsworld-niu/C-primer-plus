#include <iostream>
#include "ex1.1.h"

int main()
{
    golf g1 = {"Newswprld", 123};
    golf g2;
    golf g3;
    showgolf(g1);
    setgolf(g2, "Lenyi", 100);
    showgolf(g2);
    handicap(g2, 145);
    showgolf(g2);
    golf g[3];
    int count = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (!setgolf(g[i]))
            break;
        ++count;
    }
    for (int j = 0; j < count ; ++j)
        showgolf(g[j]);
}