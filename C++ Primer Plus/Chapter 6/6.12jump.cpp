// jump.cpp -- using continue and break
#include <iostream>
const int Arsize = 80;
int main()
{
    char line[Arsize];
    int spaces = 0;
    
    std::cout << "Enter a line of text:\n";
    std::cin.get(line,Arsize);
    std::cout << "Complete line:\n" << line << std::endl;
    std::cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; ++i)
    {
        std::cout << line[i];       // display character
        if (line[i] == '.')         // quit if it's a period
            break;
        if (line[i] == ' ')         // skip rest of loop
            {
                ++spaces;
                continue;
            }
    }
    std::cout << "\n" << spaces << " spaces.\n";
    std::cout << "Done.\n";
    return 0;
}