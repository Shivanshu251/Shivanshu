#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};


class CircularLinkedList {
private:
    Node* head;

public:
    
    CircularLinkedList() {
        this->head = nullptr;
    }

    
    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
    }

    
    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        
        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }

        
        Node* last = head;
        while (last->next != head)
            last = last->next;

        Node* temp = head;
        head = head->next;
        last->next = head;

        delete temp;
    }

    
    void display() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << "\n";
    }
};


int main() {
    CircularLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Circular Linked List: ";
    list.display();

    cout << "Deleting from beginning...\n";
    list.deleteFromBeginning();

    cout << "After deletion: ";
    list.display();

    return 0;
}
