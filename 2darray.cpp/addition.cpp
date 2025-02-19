#include <iostream>
using namespace std;

int main() {
    
    int matrix1[3][3], matrix2[3][3], result[3][3];

    cout << "Enter elements of the first 2x2 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the second 2x2 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Resultant Matrix after Addition:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
