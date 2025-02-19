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
void insertAtstart(Node *&head,int x){
    Node* temp = new Node(x);
    temp->next=head;
    head=temp;
}

//traverse the linked list
void printList(Node *&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main(){
    Node *node1= new Node(12);
    Node*head=node1;
    insertAtstart(head,14);
    printList(head);
    return 0;
} 