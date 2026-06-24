#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found: " << arr[left] << " " << arr[right];
            return true;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    cout << "No pair found";
    return false;
}

int main() {
    vector<int> arr = {2,5,6,7,9,10,11};
    int target = 18;

    twoSum(arr, target);

    return 0;
}