// forstr1.cpp -- using for with a string
#include <iostream>
#include <string>
int main()
{
    std::cout << "Enter a word: ";
    std::string word;
    std::cin >> word;

    // display letters in reverse order
    for (int i = word.size() - 1; i >= 0; i--)
        std::cout << word[i];
    std::cout << "\nBye.\n";
    return 0;
}