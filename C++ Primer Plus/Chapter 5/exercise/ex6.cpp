#include <iostream>
int main()
{
    const char * pt[12] = 
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int sales[3][12];
    int sum[3] = {0, 0, 0};
    for (int i = 0 ; i < 3; ++i)
    {
        std::cout << std::endl << "The " << i + 1 << " year: " << std::endl ;
        for (int j = 0; j < 12; ++j)
        {
            std::cout << pt[j] << ": ";
            std::cin >> sales[i][j];
            sum[i] += sales[i][j];
        }
        std::cout << "The " << i + 1 << " year: " << sum[i];
    }
    std::cout << std::endl << "The sum: " << sum[0] + sum[1] + sum[2];
    return 0;
}