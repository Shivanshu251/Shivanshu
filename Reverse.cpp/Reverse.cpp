#include <iostream>
#include <cmath>
using namespace std;

int reverseInteger(int num) {
    int reversed = 0;
    bool isNegative = num < 0;

    if (isNegative) {
        num = -num;
    }

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (isNegative) {
        reversed = -reversed;
    }

    return reversed;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int reversedNum = reverseInteger(num);
    cout << "Reversed integer: " << reversedNum << endl;

    return 0;
}
