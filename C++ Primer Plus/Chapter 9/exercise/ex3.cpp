#include <iostream>
struct chaff
{
    char dross[20];
    int slag;
};
const int Arsize = 2;
chaff buffer[Arsize];

int main()
{
    chaff * pr = new chaff[2];
    chaff * pt = new (pr) chaff;
    pt[0] = {"DogLyz", 10};
    pt[1] = {"Newsworld", 100};
    for (int i = 0; i < Arsize; ++i)
    {
        std::cout << "Dross: " << pt[i].dross << "\n";
        std::cout << "Slag: " << pt[i].slag << "\n";
    }
}