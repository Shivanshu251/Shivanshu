#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();

    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= arr[j];
            }
        }

        result[i] = product;
    }

    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
//output: 24 12 8 6