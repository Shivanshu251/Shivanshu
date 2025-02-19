#include <iostream>
using namespace std;

class Node {
    public:
    int data;       
    Node* next;     

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to insert a value at the end of the linked list
void insert(Node*& head, int value) {
    Node* newNode = new Node(value); // Create a new node with the value
    if (head == nullptr) {           // If the list is empty
        head = newNode;              // New node becomes the head
        return;
    }
    Node* temp = head;               // Temporary pointer to traverse the list
    while (temp->next != nullptr) {  // Traverse to the end of the list
        temp = temp->next;
    }
    temp->next = newNode;            // Link the new node at the end
}

// Function to display the linked list
void display(Node* head) {
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
