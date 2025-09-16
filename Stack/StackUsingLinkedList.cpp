#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class MyStack{
    private:
    Node* top; // Pointer to top node
    int size;

    public:
    MyStack(){
        top = NULL;
        size = 0;
    }

    void push(int value){
        Node* newNode = new Node(value);
        newNode->next = top; //new node points to the old top
        top = newNode; //update top
        cout<<value<<" pushed into the stack"<<endl;
        size++;
    }

    int pop(){
        if(top==NULL){
            cout<<"Stack is empty! "<<endl;
            return -1;
        }

        int poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        cout<<poppedValue<<" Popped form the stack"<<endl;
        return poppedValue;

    }

    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        return top->data;
    }

    bool isEmpty(){
        return top==NULL;
    }

    int getSize(){
        return size;
    }

    void display(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        Node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

};

int main() {
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    s.display();
    return 0;
}
