#include <iostream>
int main()
{
    std::cout << "Please enter one of the following choices:\n"
                << "c) carnivore               p) pianist\n"
                << "t) tree                    g) game\n";
    char ch;
    std::cin >> ch;
    while(ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
    {
        std::cout << "Please enter a c, p, t, or g: ";
        std::cin >> ch;
    }
    switch(ch)
    {
        case 'c' : std::cout << "A maple is a carnivore.\n";
                    break;
        case 'p' : std::cout << "A maple is a pianist.\n";
                    break;
        case 't' : std::cout << "A maple is a tree.\n";
                    break;
        case 'g' : std::cout << "A maple is a game.\n";
                    break;
    }
    return 0;
}