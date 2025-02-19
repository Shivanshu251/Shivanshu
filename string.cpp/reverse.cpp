#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) 
{
    char* start = str;           // Pointer to the start of the string
    char* end = str + strlen(str) - 1; // Pointer to the end of the string

    // Swap characters while start pointer is before the end pointer
    while (start < end) {
        // Swap characters
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers
        start++;
        end--;
    }
}

int main() 
{
    char str[100]; // Input buffer for the string

    // Input string from the user
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Reverse the string using pointers
    reverseString(str);

    // Output the reversed string
    cout << "Reversed string: " << str << std::endl;

    return 0;
}
