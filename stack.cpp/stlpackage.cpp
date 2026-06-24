#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << std::endl; 
    s.pop();
    cout << "Top after pop: " << s.top() << std::endl; 
    cout << "Size of stack: " << s.size() << std::endl; 
    if (s.empty()) 
    {
        std::cout << "Stack is empty" << std::endl;
    } else 
    {
        std::cout << "Stack is not empty" << std::endl;
    }
    return 0;
}
