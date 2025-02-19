#include <iostream>
using namespace std;

int main() {
    char str[100];       
    char *start, *end; 
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str; 

    start = str;         // Points to the first character
    end = str;           // Temporary pointer to find the last character

    // Move 'end' to the last character of the string
    while (*end != '\0') {
        end++;
    }
    end--; // Move back one step to point to the last valid character

    while (start < end) 
    {
        if (*start != *end) 
        { 
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    
    if (isPalindrome) 
    {
        cout << "The string is a palindrome." << endl;
    } 
    else 
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
