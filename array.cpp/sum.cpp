#include<iostream>
using namespace std;
int main()
{
    int matrix[3][3],i,j;
    cout<<"Enter the elements of a 3X3 matrix : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Sum of each row: "<<endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
    cout << "Sum of each column:" << endl;
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
    return 0;
}
