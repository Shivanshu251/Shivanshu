#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> s;
    stack<int> minS;

public:
    void push(int x) {
        s.push(x);

        if (minS.empty() || x <= minS.top())
            minS.push(x);
    }

    void pop() {
        if (s.empty()) return;

        if (s.top() == minS.top())
            minS.pop();

        s.pop();
    }

    int top() {
        if (s.empty()) return -1;
        return s.top();
    }

    int getMin() {
        if (minS.empty()) return -1;
        return minS.top();
    }
};

int main() {
    MinStack st;

    st.push(5);
    st.push(2);
    st.push(8);
    st.push(1);

    cout << "Min: " << st.getMin() << endl; 

    st.pop();
    cout << "Min: " << st.getMin() << endl; 

    st.pop();
    cout << "Min: " << st.getMin() << endl; 

    return 0;
}