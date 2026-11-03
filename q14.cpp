#include <iostream>
using namespace std;

class Calculator {
public:
   
    int add(int firstNumber, int secondNumber) {
        return firstNumber + secondNumber;
    }

    double add(double firstNumber, double secondNumber) {
        return firstNumber + secondNumber;
    }
};

int main() {
    Calculator calculator;

    cout << "Sum of integers (5 + 3): " << calculator.add(5, 3) << endl;
    cout << "Sum of doubles (2.5 + 4.3): " << calculator.add(2.5, 4.3) << endl;
    return 0;
}
