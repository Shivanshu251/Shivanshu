#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 5;      
    int N = 6;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int total = N * (N + 1) / 2;
    int missing = total - sum;

    cout << "Missing number is: " << missing;

    return 0;
}