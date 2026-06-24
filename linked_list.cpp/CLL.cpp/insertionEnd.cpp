#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=nullptr;
        }
};

void insertAtTail(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}

void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)" << endl;
}


int main() {
    Node* head = nullptr;
    

    cout << "Circular Linked List: ";
    display(head);

    return 0;
}
