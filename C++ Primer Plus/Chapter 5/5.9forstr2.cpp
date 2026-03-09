// forstr2.cpp -- reversing an array
#include <iostream>
#include <string>
int main()
{
    std::cout << "Enter a word: ";
    std::string word;
    std::cin >> word;

    //physically modify string object
    char temp;
    int i,j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {                                   // start block
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }                                   // end block
    std::cout << word << "\nDone\n";
    return 0;
}