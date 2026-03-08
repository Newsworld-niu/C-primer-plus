#include <iostream>
int main()
{
    std::cout << "What's your first name? ";
    char fstnm[20];
    std::cin.getline(fstnm, 20);

    std::cout << "What's your last name? ";
    char lstnm[20];
    std::cin.getline(lstnm, 20);

    std::cout << "What letter grade do you deserve? ";
    char ler;
    std::cin >> ler;
    ler = ler + 1 ;

    std::cout << "What's your age? ";
    int age;
    std::cin >> age;

    std::cout << "Name: " << lstnm << ", " << fstnm << std::endl;
    std::cout << "Grade: " << ler << std::endl;
    std::cout << "Age: " << age << std::endl;
    return 0;
}