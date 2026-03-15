// outfile.cpp -- writing to a file
#include <iostream>
#include <fstream>          // for file I/O

int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    
    std::ofstream outFile;          // create object for output
    outFile.open("carinfo.txt");    // associate with a file
    
    std::cout << "Enter the make and model of automobile: ";
    std::cin.getline(automobile, 50);
    std::cout << "Enter the model year: ";
    std::cin >> year;
    std::cout << "Enter the original asking price: ";
    std::cin >> a_price;
    d_price = 0.913 * a_price;

// display information on screen with cout

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout.setf(std::ios_base::showpoint);
    std::cout << "Make and model: " << automobile << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Was asking $" << a_price << std::endl;
    std::cout << "Now asking $" << d_price << std::endl;

// now do exact same things using outFile instead of cout

    outFile << std::fixed;
    outFile.precision(2);
    outFile.setf(std::ios_base::showpoint);
    outFile << "Make and model: " << automobile << std::endl;
    outFile << "Year: " << year << std::endl;
    outFile << "Was asking $" << a_price << std::endl;
    outFile << "Now asking $" << d_price << std::endl;

    outFile.close();            // done with file
    return 0;
}