#include <iostream>
using namespace std;

int binarySearch(int numbers[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (numbers[mid] == key)
            return mid;
        else if (key < numbers[mid])
            high = mid - 1;     
        else
            low = mid + 1;      
    }
    return -1;
}

int main() {
    int size, key;
    int numbers[50];

    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter " << size << " elements in sorted order: ";
    for (int i = 0; i < size; i++) cin >> numbers[i];

    cout << "Enter element to search: ";
    cin >> key;

    int position = binarySearch(numbers, size, key);
    if (position != -1)
        cout << "Element found at position " << position + 1 << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
