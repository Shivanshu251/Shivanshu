#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q1.push(x);
        cout << "Pushed: " << x << endl;
    }

    void pop() {
        if(q1.empty()) {
            cout << "Stack Underflow" << endl;
            return;
        }

        while(q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        cout << "Popped: " << q1.front() << endl;
        q1.pop();

        swap(q1, q2);
    }

    int top() {
        if(q1.empty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        while(q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int ans = q1.front();
        q2.push(q1.front());
        q1.pop();

        swap(q1, q2);

        return ans;
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop(); 
    s.pop();
    s.pop(); 

    return 0;
}