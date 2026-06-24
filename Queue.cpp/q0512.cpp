#include <iostream>
using namespace std;
 
class Queue{
    public:
    int arr[100];
    const int n=100;
    int front;
    int rear;
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
    bool isFull(){
        return(rear==n-1);
    }
    bool isEmpty(){
        return(front==-1);
    }
    void Enqueue(int data){
        if(isFull()){
            cout<<"Queue is full"<<endl;
        }
        if(front == -1){
            front=0;
        }
        rear++;
        arr[rear]=data;
    }
    void Display(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    void Dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        cout<<"Removed: "<<arr[front]<<endl;
        front++;
        if(front > rear){
            front=-1;
            rear=-1;
        }
    }
};
 
int main() {
   Queue q;
   q.Enqueue(40);
   q.Enqueue(50);
   q.Display();
   q.Dequeue();
   q.Display();

 
    return 0;
}