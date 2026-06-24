#include <iostream>
using namespace std;

int main() {
    
    int matrix1[4][3];

    cout << "Enter elements of the first 2x2 matrix:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }
}