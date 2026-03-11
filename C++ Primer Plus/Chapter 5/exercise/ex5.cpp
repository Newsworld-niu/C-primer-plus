#include <iostream>
#include <string>
int main()
{
    std::string pt[12] = 
    {
        "January: ",
        "February: ",
        "March: ",
        "April: ",
        "May: ",
        "June: ",
        "July: ",
        "August: ",
        "September: ",
        "October: ",
        "November: ",
        "December: "
    };
    int sales[12];
    int sum = 0;
    for (int i = 0; i < 12; ++i)
    {
        std::cout << pt[i];
        std::cin >> sales[i];
        sum += sales[i];
    }
    std::cout << "The sum: " << sum;
    return 0;
}