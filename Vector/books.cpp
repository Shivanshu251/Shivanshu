#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxPages) {
    int studentCount = 1;
    int pagesSum = 0;

    for (int i = 0; i < n; i++) {
        if (pagesSum + arr[i] <= maxPages) {
            pagesSum += arr[i];
        } else {
            studentCount++;
            pagesSum = arr[i];

            if (studentCount > m) {
                return false;
            }
        }
    }
    return true;
}

int allocateBooks(vector<int>& arr, int n, int m){
    if (m > n) return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = 0;

    for (int pages : arr) {
        high += pages;
    }

    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4;
    int m = 2;
    cout << "Minimum maximum pages = "
         << allocateBooks(arr, n, m) << endl;

    return 0;
}