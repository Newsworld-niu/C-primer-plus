// block.cpp -- use a block statement
#include <iostream>
int main()
{
    std::cout << "The Amazing Accounto will sum and average ";
    std::cout << "five numbers for you.\n";
    std::cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {                           // block starts here
        std::cout << "Value " << i << ": ";
        std::cin >> number;
        sum += number;
    }                           // block ends here
    std::cout << "Five exquisite choices indeed! ";
    std::cout << "They sum to " << sum << std::endl;
    std::cout << "and average to " << sum / 5 << ".\n";
    std::cout << "The Amazing Accounto bids you adieu!\n";
    return 0;
}