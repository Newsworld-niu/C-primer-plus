#include <iostream>
#include <cstring>
int main()
{
    const int wordsize = 100;
    char word[wordsize];
    int count = 0;
    std::cin >> word;
    while (strcmp(word, "done"))
    {
        ++count;
        std::cin >> word;
    }
    std::cout << "You entered a total of " << count << " words.";
    return 0;
}