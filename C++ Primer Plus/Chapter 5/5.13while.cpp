// while.cpp -- introducing the while loop
#include <iostream>
const int Arsize = 20;
int main()
{
    char name[Arsize];
    std::cout << "Your first name, please: ";
    std::cin >> name;
    std::cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;        // strat beginning of string
    while (name[i] != '\0')       // process to end of string
    {
        std::cout << name[i] << ": " << int(name[i]) << std::endl;
        i++;                      // don't forget this step
    }
    return 0;
}