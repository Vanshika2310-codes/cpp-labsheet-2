#include <iostream>
using namespace std;

int countWords(char text[]) {
    int wordCount = 0;
    bool insideWord = false;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ') {
            if (!insideWord) {      
                wordCount++;
                insideWord = true;
            }
        } else {
            insideWord = false;
        }
    }
    return wordCount;
}

int main() {
    char text[200];
    cout << "Enter a sentence: ";
    cin.getline(text, 200);

    cout << "Number of words: " << countWords(text) << endl;
    return 0;
}
