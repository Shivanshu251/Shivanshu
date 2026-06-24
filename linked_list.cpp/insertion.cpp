#include <iostream>
using namespace std;

class Node {
    public:
    int data;       
    Node* next;     

    Node(int value) {
        data = value;
        next = nullptr;
    }
};


void insert(Node*& head, int value) 
{
    Node* newNode = new Node(value); 
    if (head == nullptr) {           
        head = newNode;              
        return;
    }
    Node* temp = head;               
    while (temp->next != nullptr) {  
        temp = temp->next;
    }
    temp->next = newNode; 
}           

// Function to display the linked list
void display(Node* head) 
{
    Node* temp = head;               
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = NULL;

    insert(head, 12);
    insert(head, 13);
    insert(head, 17);

    
    cout << "Linked list: ";
    display(head);

    

    return 0;
}
