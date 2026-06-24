#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {2,11,7,5,6,9,10};
    int target = 18;

    sort(arr.begin(), arr.end());

    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << arr[left] << " " << arr[right];
            return 0;
        }
        else if (sum < target)
            left++;
        else
            right--;
    }

    cout << "No pair found";
}