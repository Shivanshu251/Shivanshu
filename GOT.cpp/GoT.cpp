#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num2 == num3) {
        cout << "All numbers are equal!" << endl;
    }

    else if (num1 == num2 && num1 > num3) {
        cout << "Two numbers are equally the largest!" << endl;
    }

    else if (num1 == num3 && num1 > num2) {
        cout << "Two numbers are equally the largest!" << endl;
    }

    else if (num2 == num3 && num2 > num1) {
        cout << "Two numbers are equally the largest!" << endl;
    }
    
    else {
        if (num1 > num2 && num1 > num3) {
            cout << "The largest number is " << num1 << "." << endl;
        }
        else if (num2 > num1 && num2 > num3) {
            cout << "The largest number is " << num2 << "." << endl;
        }
        else {
            cout << "The largest number is " << num3 << "." << endl;
        }
    }

    return 0;
}
