#include<iostream>
#include<climits>
using namespace std;
int insert(int arr[],int k, int &n ,int item)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    
    int j=n;
    while(j>k){
        arr[j+1]=arr[j];
        j--;
    }
    arr[k]=item;
    n=n+1;
    return 0;
}

int main()
{
    int arr[10],n,item,k;
    cout<<"Enter no. of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"enter item to insert: ";
    cin>>item;
    cout<<"enter index to insert : ";
    cin>>k;
    insert(arr,k,n,item);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}