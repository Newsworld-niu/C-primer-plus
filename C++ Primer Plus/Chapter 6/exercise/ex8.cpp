#include <iostream>
#include <fstream>
int main()
{
    std::ifstream inFile;
    inFile.open("../scores.txt");
    int num = 0;
    while(!inFile.eof())
    {
        inFile.get();
        ++num;
    }
    std::cout << "The number of characters: " << num << std::endl;
    return 0;
}