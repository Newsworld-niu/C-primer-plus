#include <iostream>
#include "ex3.1.h"

int main()
{
    Golf g1 = {"Newswprld", 123};
    Golf g2;
    Golf g3;
    g1.showgolf();
    g2 = Golf("Lenyi", 100);
    g2.showgolf();
    g2.handicap(145);
    g2.showgolf();
    Golf g[3];
    for (int j = 0; j < 3 ; ++j)
        g[j].showgolf();
}