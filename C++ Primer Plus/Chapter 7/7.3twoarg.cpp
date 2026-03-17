// twoarg.cpp -- a function with 2 arguments
#include <iostream>
void n_chars(char,int);
int main()
{
    int times;
    char ch;

    std::cout << "Enter a character: ";
    std::cin >> ch;
    while (ch != 'q')       // q to quit
    {
        std::cout << "Enter an integer: ";
        std::cin >> times;
        n_chars(ch, times);  // function with two arguments
        std::cout << "\nEnter another character or press the"
                    " q-key to quit: ";
        std::cin >> ch;
    }
    std::cout << "The value of times is " << times << ".\n";
    std::cout << "Bye\n";
    return 0;
}

void n_chars(char c, int n)     // displays c n times
{
    while (n-- > 0)         // continue until n reaches 0
        std::cout << c;
}