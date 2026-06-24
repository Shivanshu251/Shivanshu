#include <iostream>
using namespace std;

void diagonalSum(int arr[10][10], int size) {
    int firstDiagonalSum = 0;
    int secondDiagonalSum = 0;

    for (int i = 0; i < size; i++) {
        firstDiagonalSum += arr[i][i];
        secondDiagonalSum += arr[i][size - i - 1];
    }

    cout << "Primary Diagonal Sum: " << firstDiagonalSum << endl;
    cout << "Secondary Diagonal Sum: " << secondDiagonalSum << endl;
}

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int arr[10][10];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    diagonalSum(arr, size);

    return 0;
}