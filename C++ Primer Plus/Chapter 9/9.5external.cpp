// external.cpp -- external variables
// compile with support.cpp
#include <iostream>

// external variable
double warming = 0.3;       // warming defined
// function prototypes
void update(double dt);
void local();

int main()              // uses global variable
{
    std::cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);        // call function to change warming
    local();            // call function with local
    std::cout << "Global warming is " << warming << " degrees.\n";    
}