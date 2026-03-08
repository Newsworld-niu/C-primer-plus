#include<iostream>
#include<cstring>

int main()
{
    std::cout << "Enter your first name: " << std::endl;
    char fstnm[30];
    std::cin.getline(fstnm,10);

    std::cout << "Enter your last name: " << std::endl;
    char lstnm[10];
    std::cin.getline(lstnm, 10);

    char na[3] = ", ";
    strcat(fstnm,na);
    strcat(fstnm,lstnm);
    std::cout << "Here's the information in a single string: " << fstnm << std::endl;
    return 0;
}