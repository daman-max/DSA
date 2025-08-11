#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
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

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }

        cout<<"NULL";
    }

};

int main(){

    LinkedList list;
    list.insertAtLast(1);
    list.insertAtLast(2);
    list.insertAtLast(3);
    list.insertAtLast(4);
    list.insertAtLast(5);
    cout<<"Orignal List-->";
    list.display();
    cout<<endl;
    cout<<"Reversed List-->";
    list.reverseList();
    list.display();


}