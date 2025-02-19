#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[10];int n,i;
    cout<<"Enter no. of elements: ";
    cin>>n;
    for (i = 0; i < n; i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int start =0,end=n-1;
    while (start<end) {
        if(arr[start]+arr[end]==target){
            cout<<arr[start]<<" & "<<arr[end];
            return 1;
        }
        else if(arr[start]=arr[end]<target){
            start++;
        }
        else{
            end--;
        }
    }
    return 1;
}