#include <iostream>
using namespace std;

void swapNumbers(int &first, int &second) {
    int temp = first;
    first = second;
    second = temp;
}

int main() {
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    cout << "Before swap: " << firstNumber << " " << secondNumber << endl;
    swapNumbers(firstNumber, secondNumber);
    cout << "After swap: " << firstNumber << " " << secondNumber << endl;
    return 0;
}
