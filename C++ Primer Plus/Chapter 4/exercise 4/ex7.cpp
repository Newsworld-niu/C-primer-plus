#include<iostream>
#include<string>

struct pizza
{
    std::string pzname;
    float diameter;
    int weight;
};
int main()
{
    pizza pizza1;
    std::cout << "Enter the name of the pizza: ";
    getline(std::cin,pizza1.pzname);

    std::cout << "Enter the diameter of the pizza: ";
    std::cin  >> pizza1.diameter;

    std::cout << "Enter the weight of the pizza: ";
    std::cin >> pizza1.weight;

    std::cout << pizza1.pzname << " is " << pizza1.diameter << " diameters"
            << " and " << pizza1.weight << " kgs." << "\n";
            
    return 0;
}