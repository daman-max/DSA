#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList {
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop_front(){
        if(head==NULL){
            cout<<"DLL is empty"<<endl;
            return;
        }

        Node* temp = head;
        head=head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"DLL is empty"<<endl;
            return;
        }

        Node* temp = tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
        
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main() {
    DoublyLinkedList dll;

    dll.push_back(10);
    dll.push_back(20);
    dll.push_back(30);
    dll.push_back(40);
    dll.push_back(50);
    dll.pop_front();
    dll.pop_back();
    dll.display();

    return 0;
}
