#include <iostream>
#include <cctype>
#include <cstring>
int main()
{
    std::cout << "Enter words (q to quit): \n";
    char words[10];
    int vowels = 0;
    int consonants = 0;
    int others = 0;
    while(std::cin >> words && strcmp(words,"q"))
    {
        if (isalpha(words[0]))
            {
                if (words[0] == 'a'|| words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u')
                    ++vowels;
                else
                    ++consonants;
            }
        else
            ++others;
    }
    std::cout << vowels << " words beginning with vowels\n";
    std::cout << consonants << " words beginning with consonants\n";
    std::cout << others << " others\n";
    return 0;
}