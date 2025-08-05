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
    
    void deleteAtBeg(){
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

            Node* temp = head;
            head = head->next;
            delete temp;
            return;
    }

    void deleteAtLast() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        Node* lastNode = temp->next;
        temp->next = NULL;
        delete lastNode;
    }

    void deleteAtPosition(int pos) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        if (pos <= 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if (pos == 1) {
            deleteAtBeg(); 
            return;
        }

        Node* temp = head;

    
        for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }

        if (temp->next == NULL) {
            cout << "Position out of bounds" << endl;
            return;
        }

        Node* posDel = temp->next;
        temp->next = posDel->next; 
        delete posDel;
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
    list.deleteAtBeg();
    list.deleteAtLast();
    list.deleteAtPosition(3);
    list.display();

}