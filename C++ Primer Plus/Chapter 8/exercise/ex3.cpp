#include <iostream>
#include <cstring>
void uppercase1(std::string & str1);

int main()
{
    std::cout << "Enter a string(q to quit): ";
    std::string str0;
    getline(std::cin, str0);
    while (str0 != "q")
    {
        uppercase1(str0);
        std::cout << "Next string (q to quit): ";
        getline(std::cin, str0);
    }
    std::cout << "Bye." << std::endl;
}

void uppercase1(std::string &str1)
{
    std::string str2 = str1;
    for (int i = 0; i < str1.size(); ++i)
         str2[i] = std::toupper(str1[i]);
    std::cout << str2 << std::endl;
}