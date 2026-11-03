#include <iostream>
using namespace std;

const int SIZE = 3;

void addMatrices(int matrixA[SIZE][SIZE], int matrixB[SIZE][SIZE], int resultMatrix[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++)
        for (int col = 0; col < SIZE; col++)
            resultMatrix[row][col] = matrixA[row][col] + matrixB[row][col];
}

int main() {
    int matrixA[SIZE][SIZE], matrixB[SIZE][SIZE], resultMatrix[SIZE][SIZE];

    cout << "Enter elements of first matrix (9 values):" << endl;
    for (int row = 0; row < SIZE; row++)
        for (int col = 0; col < SIZE; col++)
            cin >> matrixA[row][col];

    cout << "Enter elements of second matrix (9 values):" << endl;
    for (int row = 0; row < SIZE; row++)
        for (int col = 0; col < SIZE; col++)
            cin >> matrixB[row][col];

    addMatrices(matrixA, matrixB, resultMatrix);

    cout << "Sum of the matrices:" << endl;
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++)
            cout << resultMatrix[row][col] << "\t";
        cout << endl;
    }
    return 0;
}
