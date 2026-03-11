#include <iostream>
#include <string>
struct car 
{
    std::string carname;
    int year;
};
int main()
{
    std::cout << "How many cars do you wish to catalog? ";
    int num;
    std::cin >> num;
    car * pt = new car[num];
    for (int i = 1; i < num + 1; ++i)
    {
        std::cout << "Car #" << i << ":" << std::endl;
        std::cout << "Please enter the make: ";
        std::cin.get();
        getline(std::cin, pt[i-1].carname);

        std::cout << "Please enter the year made: ";
        std::cin >> pt[i-1].year;
    }
    
    std::cout << "Here is your collection:" << std::endl;
    for (int i = 0; i < num; ++i)
        std::cout << pt[i].year << " " << pt[i].carname << std::endl;
    return 0;
}