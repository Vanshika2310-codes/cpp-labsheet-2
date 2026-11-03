#include <iostream>
using namespace std;

const int SIZE = 3;

void diagonalSum(int matrix[SIZE][SIZE], int &mainSum, int &secondarySum) {
    mainSum = 0;
    secondarySum = 0;
    for (int i = 0; i < SIZE; i++) {
        mainSum += matrix[i][i];                  
        secondarySum += matrix[i][SIZE - 1 - i];  
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int mainSum, secondarySum;

    cout << "Enter elements of the matrix (9 values):" << endl;
    for (int row = 0; row < SIZE; row++)
        for (int col = 0; col < SIZE; col++)
            cin >> matrix[row][col];

    diagonalSum(matrix, mainSum, secondarySum);

    cout << "Sum of main diagonal: " << mainSum << endl;
    cout << "Sum of secondary diagonal: " << secondarySum << endl;
    return 0;
}
