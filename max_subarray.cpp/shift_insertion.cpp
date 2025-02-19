#include <iostream>
using namespace std;

int main() {
    const int size = 6; // Total size of the array
    int arr[size] = {0}; // Initialize the array with 0
    int numElements = 5; // Number of existing elements

    // Input the initial 4 elements
    cout << "Enter 5 elements for the array: " << endl;
    for (int i = 0; i < numElements; i++) {
        cin >> arr[i];
    }

    // Display the current array
    cout << "Current array: ";
    for (int i = 0; i < numElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Input the element to insert
    int element;
    cout << "Enter the element to insert at position 3 (index 2): ";
    cin >> element;

    // Shift elements to the right from index 2
    for (int i = numElements; i > 2; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at index 2
    arr[2] = element;

    // Increment the number of elements
    numElements++;

    // Display the updated array
    cout << "Updated array: ";
    for (int i = 0; i < numElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
