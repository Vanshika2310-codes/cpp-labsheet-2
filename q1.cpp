#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number < 2) return false;
    for (int divisor = 2; divisor <= number / 2; divisor++) {
        if (number % divisor == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number" << endl;
    else
        cout << number << " is not a prime number" << endl;
    return 0;
}
