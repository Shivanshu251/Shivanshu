#include <iostream>
using namespace std;

class Node {
    public:
    int data;       
    Node* next;     

    // Constructor to initialize a node
    Node(int data) {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtEnd(Node*& head, Node*& tail, int x) {
    Node* temp = new Node(x); // Create a new node
    tail->next=temp;
    tail=tail->next;
}

void insertAtposition(Node*&head, int position,int x){
    Node*temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node* newnode=new Node(x);
    newnode->next=temp->next;
    


}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout<<current->data<<endl;
        current = current->next;
    }
}

int main() {
    Node *node1= new Node(12);
    Node* head = node1; 
    Node* tail = node1; // Initialize tail

    insertAtEnd(head, tail, 14); 
    insertAtEnd(head, tail, 18); 
    insertAtposition(head, 3, 24);
    printList(head); // Print the linked list
    return 0;
}