#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 2};

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int freq = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        if (freq > n / 2) {
            cout << "Majority Element: " << arr[i];
            return 0;
        }
    }

    cout << "No Majority Element";

    return 0;
}