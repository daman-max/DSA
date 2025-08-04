#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList{
    private:
    Node* head;

    public:

    LinkedList(){
        head = NULL;
    }

    void insertAtLast(int value){
        Node* newNode = new Node(value);
        if(head==NULL){
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->next!=NULL){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void inserAtBegining(int value){
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtPosition(int value, int pos){
        if(pos <= 0 ){
            cout<<"Invalid Position"<<endl;
            return;
        }

        Node* newNode = new Node(value);

        if(pos == 1){
            inserAtBegining(value);
            return;
        }

        Node* temp = head;
        for(int i = 1; i < pos-1 && temp->next != NULL; i++){
            temp = temp->next;
        }

        
        newNode->next = temp->next;
        temp->next = newNode;
        
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }

        cout<<"NULL";
    }
};

int main() {
    
    // Node* head = new Node(10);
    // Node* second = new Node(11);
    // Node* tail = new Node(12);
    // head->next = second;
    // second->next = tail;
    // tail->next = NULL;

    // Node* temp = head;

    // while(temp!=NULL){
    //     cout<<temp->data<<"-->";
    //     temp = temp->next;
    // }

    // cout<<"NULL";

    LinkedList list;
    list.inserAtBegining(11);
    list.insertAtLast(45);
    list.insertAtLast(60);
    list.insertAtLast(55);
    list.inserAtBegining(33);
    list.insertAtLast(5);
    list.insertAtPosition(50,2);
    list.display();

}