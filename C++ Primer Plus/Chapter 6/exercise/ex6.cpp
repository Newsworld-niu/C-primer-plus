#include <iostream>
#include <cstring>
struct donator
{
    std::string name;
    double contribution;
};
int main()
{
    std::cout << "Please enter the number of contributors: ";
    int nums;
    std::cin >> nums;
    donator * pt = new donator[nums];
    for (int i = 0; i < nums; ++i)
    {
        std::cout << "\nPlease enter " << i+1 << " name: ";
        std::string name1;
        std::cin >> name1;
        std::cout << "\nPlease enter the amounts: ";
        double amount;
        std::cin >> amount;
        pt[i].name = name1;
        pt[i].contribution = amount;
    }

    int Grand = 0;
    std::cout << "\nGrand Patrons: \n";
    for (int i = 0; i < nums; ++i)
    {
        if (pt[i].contribution >= 10000)
            {
                std::cout << pt[i].name << std::endl;
                ++Grand;
            }    
    }
    if (Grand == 0)
        std::cout << "none";
    
    int petite = 0;
    std::cout << "\nPatrons: \n";
    for (int i = 0; i < nums; ++i)
    {
        if (pt[i].contribution < 10000)
        {
            std::cout << pt[i].name << std::endl;
            ++petite;
        }
    }
    if (petite == 0)
        std::cout << "none\n";
    return 0;
}