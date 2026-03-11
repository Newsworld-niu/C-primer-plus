#include <iostream>
#include <cstring>  // for strcmp()

int main() {
    using namespace std;
    
    const int WORD_SIZE = 100;  // Maximum characters per word
    char word[WORD_SIZE];        // Array to store the current word
    int wordCount = 0;           // Counter for words entered
    
    cout << "Enter words (to stop, type the word done):" << endl;
    
    // Read first word
    cin >> word;
    
    // Continue reading until "done" is entered
    while (strcmp(word, "done") != 0) {
        wordCount++;  // Increment counter for each word entered
        cin >> word;  // Read next word
    }
    
    // Display the result
    cout << "You entered a total of " << wordCount << " words." << endl;
    
    return 0;
}