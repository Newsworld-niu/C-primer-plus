#include<iostream>
#include<string>

struct pizza
{
    std::string companyname;
    float diameter;
    float weight;
};
int main()
{
    pizza * pt = new pizza;
    std::cout << "Enter the company name of the pizza: ";
    getline(std::cin, pt->companyname);

    std::cout << "Enter the diameter of the pizza: ";
    std::cin >> pt->diameter;

    std::cout << "Enter the weight of the pizza: ";
    std::cin >> pt->weight;

    std::cout << pt->companyname << " is " << pt->diameter << " diameters"
            << " and " << pt->weight << " kgs.";

    return 0;
}