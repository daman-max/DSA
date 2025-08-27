#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    
    List() {
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
        head = newNode;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front(){
        if (head == NULL) {
            cout<<"List is empty"<<endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }

    void pop_back(){
        if (head == NULL) {
            cout<<"List is empty"<<endl;
            return;
        }

        Node* temp = head;
        while(temp->next->next !=NULL){
            temp=temp->next;
        }
        temp->next = NULL;
        delete temp->next;

    }

    void reverseList(){
            if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* current  = head;

        Node* previous = NULL;

        Node* next = NULL;


        while (current != NULL) {
            next = current->next;   
            current->next = previous; 
            previous = current;     
            current = next;         
        }

        head = previous;
        

    }

//  if there are 4 even elements in code and you want 3rd element as middle than use this code 
//  otherwise use next code it will give 2nd element as middle there and also gives first middle elment in case of even numbers 

    // int findMiddle(){
    //     if(head==NULL){
    //         return 0;
    //     }

    //     Node *fast=head;
    //     Node *slow=head;

    //     while(fast!=NULL && fast->next!=NULL){
    //         slow = slow->next;
    //         fast = fast->next->next;

    //     }

    //     return slow->data;
    // }

    int findMiddle(){
        if(head==NULL){
            return 0;
        }

        Node *fast=head;
        Node *slow=head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;

        }

        return slow->data;
    }


    void printLL() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l;
    l.push_front(10);
    l.push_front('a');
    l.push_back(22);
    l.push_back(25);
    l.pop_front();
    l.push_front(11);
    l.push_back(9);
    l.printLL();
    cout<<l.findMiddle();
    return 0;
}
