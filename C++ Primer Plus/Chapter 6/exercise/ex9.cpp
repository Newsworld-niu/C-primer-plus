#include <iostream>
#include <fstream>
#include <cstring>
struct donator
{
    std::string name;
    double contribution;
};
int main()
{
    std::ifstream inFile;
    int nums;
    inFile.open("../ex9.txt");
    inFile >> nums;
    std::cout << nums << "\n";
    donator * pt = new donator[nums];
    char names[20];
    double donation;
    for (int i = 0; i < nums; ++i)
    {
        inFile.get();
        inFile.getline(names,20);
        pt[i].name = names;
        inFile >> donation;
        inFile.get();
        pt[i].contribution = donation;
    }
    for (int i = 0; i < nums; ++i)
    {
        std::cout << pt[i].name << " " << pt[i].contribution << std::endl;
    }
    return 0;
}