// calling.cpp -- defining, prototyping, and calling a function
#include <iostream>

void simple();          // function prototype

int main()
{
    std::cout << "main() will call the simple() function:\n";
    simple();       // function call
        std::cout << "main() is finished with the simple() function.\n";
    // cin.get()
    return 0;
}

// function definition
void simple()
{
    std::cout << "I'm but a simple function.\n";
}