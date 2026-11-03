#include <iostream>
using namespace std;

void bubbleSort(int numbers[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int j = 0; j < size - pass - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    int numbers[50];

    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) cin >> numbers[i];

    bubbleSort(numbers, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
