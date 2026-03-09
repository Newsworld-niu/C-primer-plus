#include<iostream>
#include<array>

int main()
{
    std::array<double,3> time1;

    std::cout << "Enter the first time: ";
    std::cin >> time1[0];

    std::cout << "Enter the second time: ";
    std::cin >> time1[1];

    std::cout << "Enter the thrid time: ";
    std::cin >> time1[2];
    
    std::cout << "Time1: " << time1[0] << std::endl;
    std::cout << "Time2: " << time1[1] << std::endl;
    std::cout << "Time3: " << time1[2] << std::endl;
    std::cout << "Average time: " << (time1[0]+time1[1]+time1[2])/3 << std::endl;
    return 0;
}