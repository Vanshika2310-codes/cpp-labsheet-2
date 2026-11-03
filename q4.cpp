#include <iostream>
using namespace std;

void copyString(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';   
}

int main() {
    char sourceString[100], destinationString[100];

    cout << "Enter a string: ";
    cin.getline(sourceString, 100);

    copyString(destinationString, sourceString);

    cout << "Copied string: " << destinationString << endl;
    return 0;
}
