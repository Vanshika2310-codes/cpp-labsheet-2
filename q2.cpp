#include <iostream>
using namespace std;
void printFibonacci(int terms) {
    int first = 0, second = 1, next;
    for (int i = 1; i <= terms; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "How many terms? ";
    cin >> terms;
    printFibonacci(terms);
    return 0;
}
