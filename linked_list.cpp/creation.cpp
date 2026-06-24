#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main()
{
    Node* node1 = new Node(100);
    Node* node2 = new Node(200);

    node1->next = node2;

    cout << "Node 1 Data: " << node1->data << endl;
    cout << "Node 2 Data: " << node1->next->data << endl;

    return 0;
}
