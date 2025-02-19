#include <iostream>
#include <vector>

using namespace std;

vector<int> segregateEvenOdd(const vector<int>& nums) {
    vector<int> even_numbers;
    vector<int> odd_numbers;

    // Segregate even and odd numbers
    for(int num : nums) {
        if(num % 2 == 0) {
            even_numbers.push_back(num);
        } else {
            odd_numbers.push_back(num);
        }
    }

    // Combine even and odd numbers
    even_numbers.insert(even_numbers.end(), odd_numbers.begin(), odd_numbers.end());
    return even_numbers;
}

int main() {
    vector<int> input = {3, 4, 5, 7, 8};
    
    vector<int> output = segregateEvenOdd(input);

    // Display output
    for(int num : output) {
        cout << num << " ";
    }
    
    return 0;
}