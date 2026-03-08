#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your first name: ";
    std::string fstnm;
    getline(std::cin,fstnm);

    std::cout << "Enter your last name: ";
    std::string lstnm;
    getline(std::cin, lstnm);

    std::string fullname = fstnm + ", " + lstnm;
    std::cout << "Here's the information in a single string: " << fullname << std::endl;
    return 0;
}