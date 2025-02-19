#include <iostream>
#include <vector>
using namespace std;

// Function to find the subarray with the maximum sum
vector<int> maxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    if (k > n) {
        cout << "Subarray size is larger than the array size." << endl;
        return {};
    }

    int maxSum = 0;
    int currentSum = 0;
    int startIndex = 0;

    // Compute the sum of the first window
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
            startIndex = i - k + 1;
        }
    }

    // Construct the resulting subarray
    vector<int> result;
    for (int i = startIndex; i < startIndex + k; i++) {
        result.push_back(arr[i]);
    }

    cout << "Maximum Sum: " << maxSum << endl;
    return result;
}

int main() {
    int n, k;

    // Input array size and elements
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the subarray size
    cout << "Enter the size of the subarray: ";
    cin >> k;

    // Get the subarray with the maximum sum
    vector<int> result = maxSumSubarray(arr, k);

    // Print the resulting subarray
    cout << "Subarray with maximum sum: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}