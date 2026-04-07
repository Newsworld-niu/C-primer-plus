#include <iostream>
#include <cstring>
const int ArSize = 40;

struct CandyBar
{
    char name[ArSize];
    float weights;
    int calories;
};

void Set_CandyBar(CandyBar & c1, const char * name = "Millennium Munch", const double weights = 2.85, const int calories = 350);
void display_Candy(const CandyBar & c2);

int main()
{
    CandyBar h1;
    Set_CandyBar(h1);
    display_Candy(h1);
}

void Set_CandyBar(CandyBar & c1, const char * name, const double weights, const int calories)
{
    strncpy(c1.name, name, ArSize - 1);
    c1.name[ArSize - 1] = '\0';
    c1.weights = weights;
    c1.calories = calories;
}

void display_Candy(const CandyBar & c2)
{
    std::cout << "Brand name: " << c2.name << std::endl;
    std::cout << "Weight: " << c2.weights << std::endl;
    std::cout << "Calory: " << c2.calories << std::endl;
}