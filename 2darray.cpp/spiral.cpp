#include <iostream>
using namespace std;

void printSpiralMatrix(int arr[][10], int row, int col) {
    int top = 0, bottom = row - 1, left = 0, right = col - 1;

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

    
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
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

    cout << "Spiral Matrix Traversal: ";
    printSpiralMatrix(arr, row, col);

    return 0;
}