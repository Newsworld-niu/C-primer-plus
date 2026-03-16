#include <iostream>
#include <cctype>

int main()
{
    char ch;
    while (std::cin >> ch && ch != '@')
        if (!isdigit(ch))
        {
            if (islower(ch))
                std::cout << char(toupper(ch));
            else
                std::cout << char(tolower(ch));
        }
    return 0;
}