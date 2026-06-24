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

class CircularLinkedList {
private:
    Node* head;
    
public:
    CircularLinkedList() {
        head = nullptr;
    }
    

    void insertAtNthPosition(int data, int position) {

        Node* newNode = new Node(data);
        
       
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;  
            cout << "List was empty. Node inserted as the first node." << endl;
            return;
        }
        
        
        if (position == 1) {
            Node* temp = head;
            
           
            while (temp->next != head) {
                temp = temp->next;
            }
            
            newNode->next = head;
            head = newNode;
            temp->next = head;  
            cout << "Node inserted at position 1 (beginning)." << endl;
            return;
        }
        
        
        Node* temp = head;
        int count = 1;
        
        
        while (count < position - 1) {
            temp = temp->next;
            count++;
            
            
            if (temp == head) {
                cout << "Position exceeds the length of the list. Node not inserted." << endl;
                delete newNode;  
                return;
            }
        }
        
        
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Node inserted at position " << position << "." << endl;
    }
    
    
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        
        Node* temp = head;
        cout << "Circular Linked List: ";
        
      
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        
        cout << endl;
    }
    
    
    ~CircularLinkedList() {
        if (head == nullptr) {
            return;
        }
        
        Node* temp = head;
        Node* nextNode;
        
        do {
            nextNode = temp->next;
            delete temp;
            temp = nextNode;
        } while (temp != head);
    }
};


int main() {
    CircularLinkedList clist;
    
    
    clist.insertAtNthPosition(10, 1);  
    clist.display();
    
    clist.insertAtNthPosition(20, 2);  
    clist.display();
    
    clist.insertAtNthPosition(30, 3);  
    clist.display();
    
    clist.insertAtNthPosition(5, 1);   
    clist.display();
    
    clist.insertAtNthPosition(25, 3);  
    clist.display();
    
    return 0;
}