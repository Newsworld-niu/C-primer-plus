// comstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string>       // string class
int main()
{
    std::string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        std::cout << word << std::endl;
        word[0]= ch;
    }
    std::cout << "After loop ends, word is " << word << std::endl;
    return 0;
}