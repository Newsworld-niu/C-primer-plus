#include <iostream>
#include <string>
int main()
{
    std::cout << "What's your first name? ";
    std::string fstnm;
    getline(std::cin,fstnm);

    std::cout << "What's your last name? ";
    std::string lstnm;
    getline(std::cin, lstnm);

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