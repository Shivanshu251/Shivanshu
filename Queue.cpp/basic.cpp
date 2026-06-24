#include <iostream>
using namespace std;

class Queue {
private:
    static const int n = 10;
    int arr[n];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == n - 1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    void Enqueue(int value) {
        if (isFull()) {
            cout << "Overflow" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        arr[rear] = value;
        cout << "Inserted: " << value << endl;
    }

    void Dequeue() {
        if (isEmpty()) {
            cout << "Underflow" << endl;
            return;
        }

        cout << "Removed: " << arr[front] << endl;
        front++;

        
        if (front > rear) {
            front = rear = -1;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    q.display();

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue(); 

    q.display();

    return 0;
}