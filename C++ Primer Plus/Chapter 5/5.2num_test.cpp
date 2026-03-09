// num_test.cpp -- use numeric test in loop
#include <iostream>
int main()
{
    std::cout << "Enter the starting countdown value: ";
    int limit;
    std::cin >> limit;
    int i ;
    for(i = limit; i; i--)       // quits when i is 0
        std::cout << "i = " << i << "\n";
    std::cout << "Done now that i = " << i << "\n";
    return 0;
}