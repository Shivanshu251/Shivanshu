#include<iostream>
using namespace std;
int main() 
{
    string u;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, u); 

    for (int i = 0; u[i] != '\0'; i++) 
    {
        count++;
    }
    cout << "The length of the string is: " << count << endl;

    return 0;
}