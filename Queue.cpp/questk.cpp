#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
        cout << "Inserted: " << x << endl;
    }

    void dequeue() {
        if (s1.empty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        cout << "Removed: " << s2.top() << endl;
        s2.pop();

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int front() {
        if (s1.empty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        int ans = s2.top();

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }

        return ans;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front: " << q.front() << endl;

    q.dequeue();
    q.dequeue(); // Underflow

    return 0;
}