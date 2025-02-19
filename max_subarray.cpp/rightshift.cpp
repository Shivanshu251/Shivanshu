#include <iostream>
using namespace std;
int cyclic_rotation(int arr[],int n)
{
    int i,last_el = arr[n - 1];
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last_el;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 1;
}
int main()
{
    int n,w;
    int arr[10];
    cout<<"Enter no. of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cyclic_rotation(arr,n);
}