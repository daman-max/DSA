#include<iostream>
#include<queue>
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

#define MaxSize 100
class Queue{

    Node* front;
    Node* rear;
    int count;
    
    public:
    Queue(){
        front = NULL;
        rear = NULL;
        count = 0;
    }

    void push(int val){
        Node* newNode = new Node(val);

        if(rear==NULL){
            rear=front=newNode;
            count++;
            return ;
        }

        rear->next = newNode;
        rear = newNode;
        count++;
    }

    void pop(){
        if(front==NULL){
            cout<<"Nothing to remove "<<endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if(front == NULL){
            rear == NULL;
        }

        delete temp;
        count--;

    }

    void peek(){
        if(front==NULL){
            cout<<"No one in queue"<<endl;
            return;
        }

        cout<<front->data<<endl;
        return;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    bool isFull(){
        return(count==MaxSize);
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " <- ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};


int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    cout<<q.isFull()<<endl;
    q.display();
    q.pop();
    q.peek();
    q.display();
}

// using queue library just use #include<queue> than queue<int> q , and use methods according to your needs