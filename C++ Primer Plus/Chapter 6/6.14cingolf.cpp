// cingolf.cpp -- non-numeric input skipped
#include <iostream>
const int Max = 5;
int main()
{
// get data
    int golf[Max];
    std::cout << "Please enter your golf scores.\n";
    std::cout << "You must enter " << Max << " rounds.\n";
    int i = 0;
    for (i = 0; i < Max; ++i)
    {
        std::cout << "round #" << i + 1 << ": ";
        while(!(std::cin >> golf[i]))
        {
            std::cin.clear();   // reset input
            while (std::cin.get() != '\n')
                continue;       // get rid of bad input
            std::cout << "Please enter a number: ";
        }
            }
// calculate average
    double total = 0.0;
    for (i = 0; i < Max; ++i)
            total += golf[i];
// report results
    std::cout << total / Max << " = average score "
                << Max << " rounds\n";
    return 0;
}