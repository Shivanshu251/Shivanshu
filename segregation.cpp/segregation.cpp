#include <iostream>
#include <vector>
using namespace std;

void segregateZerosAndOnes(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    // Traverse the array with two pointers
    while (left < right) {
        // Move the left pointer to the right until we find a 1
        while (arr[left] == 0 && left < right) {
            left++;
        }
        // Move the right pointer to the left until we find a 0
        while (arr[right] == 1 && left < right) {
            right--;
        }
        
        // If left is less than right, swap the elements
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    
    segregateZerosAndOnes(arr);
    
    // Output the result
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}