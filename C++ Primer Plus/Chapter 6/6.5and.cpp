// and.cpp -- using the logical AND operator
#include <iostream>
const int Arsize = 6;
int main()
{
    float naaq[Arsize];
    std::cout << "Enter the NAAQS (New Age Awareness Quotients) "
              << "of\nyour neighbors. Program terminates "
              << "when you make\n" << Arsize << " entries "
              << "or enter a negative value.\n";
    
    int i = 0;
    float temp;
    std::cout << "First value: ";
    std::cin >> temp;
    while (i < Arsize && temp >= 0)  // 2 quitting criteria
    {
        naaq[i] = temp;
        ++ i;
        if (i < Arsize)     // room left in the array,
        {
            std::cout << "Next value: ";
            std::cin >> temp;
        }
        
    }
    if (i == 0)
        std::cout << "No data--bye\n";
    else
    {
        std::cout << "Enter your NAAQ: ";
        float you;
        std::cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;
        std::cout << count;
        std::cout << " of your neighbors have greater awareness of\n"
                  << "the New Age than you do.\n";
    }
    return 0;
}