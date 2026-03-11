#include <iostream>
#include <string>
int main()
{
    std::string word;
    int count = 0;
    std::cin >> word;
    while (word != "done")
    {
        ++count;
        std::cin >> word;
    }
    std::cout << "You entered a total of " << count << " words.";
    return 0;
}