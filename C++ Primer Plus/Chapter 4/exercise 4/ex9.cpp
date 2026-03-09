#include<iostream>
#include<string>
struct Candybar
{
    std::string bdnm;
    float weight;
    int calory;
};
int main()
{
    Candybar snack = 
    {
        "MochaMunch",
        2.3,
        350
    };
    std::cout << "The brand name: " << snack.bdnm << std::endl;
    std::cout << "The weight: " << snack.weight << std::endl;
    std::cout << "The calories: " << snack.calory << std::endl;

    Candybar * pt = new Candybar[3];
    
    return 0;
}