#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 7};
    int n = 5;
    int N = 7;

    bool present[8] = {false}; // index 0 unused

    for (int i = 0; i < n; i++) {
        present[arr[i]] = true;
    }

    cout << "Missing numbers are: ";
    for (int i = 1; i <= N; i++) {
        if (!present[i]) {
            cout << i << " ";
        }
    }

    return 0;
}