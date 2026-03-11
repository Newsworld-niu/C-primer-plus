#include <iostream>
int main()
{
    double daphne = 100;
    double cleo = 100;

    int count = 0;
    while (cleo <= daphne)
    {
        ++count;
        cleo *= 1.05;
        daphne = 100 + count*10;
    }
    std::cout << "After " << count << " years, Cleo exceed Daphne" << std::endl;
    std::cout << "Cleo: " << cleo << "\n";
    std::cout << "Daphne: " << daphne << "\n";
    return 0;  
}