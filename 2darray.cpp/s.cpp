#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    cout << "Enter the elements of a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "\nSum of each row:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        int RowSum = 0;
        for (int j = 0; j < 3; j++) {
            RowSum += mat[i][j];
        }
        cout << "Row " << i + 1 << ": " << RowSum << endl;
    }
    cout << "\nSum of each column:" << endl;
    for (int j = 0; j < 3; j++) {
        int ColSum = 0;
        for (int i = 0; i < 3; i++) {
            ColSum += mat[i][j];
        }
        cout << "Column " << j + 1 << ": " << ColSum<< endl;
    }
    return 0;
}