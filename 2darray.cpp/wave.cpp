#include <iostream>
using namespace std;

void printWaveMatrix(int arr[][10], int row, int col) {
    // Loop through each column
    for (int j = 0; j < col; j++) {
        
        if (j % 2 == 0) {
            for (int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        }
        
        else {
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int arr[10][10];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Wave Matrix Traversal: ";
    printWaveMatrix(arr, row, col);

    return 0;
}