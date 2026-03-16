#include <iostream>
int main()
{
    std::cout << "Please enter your incomes: ";
    int incomes;
    double taxs;
    while (std::cin >> incomes && incomes > 0)
        {
            if (incomes <= 5000)
                {
                    taxs = 0;
                    std::cout << "Taxs: " << taxs << std::endl;
                }
            else if (incomes <= 15000)
                {
                    taxs = (incomes - 5000) * 0.1;
                    std::cout << "Taxs: " << taxs << std::endl;
                }
            else if (incomes <= 35000)
                {
                    taxs = 10000 * 0.1 + (incomes - 15000) * 0.15;
                    std::cout << "Taxs: " << taxs << std::endl;
                }
            else
                {
                    taxs = 10000 * 0.1 + 20000 * 0.15 + (incomes - 35000) * 0.2;
                    std::cout << "Taxs: " << taxs << std::endl;
                }
        }
}