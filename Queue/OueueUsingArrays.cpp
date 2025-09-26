#include<iostream>
using namespace std;

class MyQueue{

    int* arr;
    int cap;
    int front; 
    int rear; 
    int count;

    public:

    MyQueue(int size){
        front = 0;
        rear = -1;
        count = 0;
        cap = size;
        arr = new int[cap];
    }

    void push(int data){
        if(count==cap) {
            cout<<"Queue is already full"<<endl;
            return;
        }

        rear = (rear+1)%cap;
        arr[rear]=data;
        count++;
    }


    void pop(){
        if(count==0){
            cout<<"Nothing to remove queue is already empty"<<endl;
            return;
        }

        int todel = arr[front];
        front = (front+1)%cap;
        count--;
        cout<<todel<<" is removed from queue"<<endl;
    }

    void peek(){
        if(count==0){
            cout<<"Queue is empty"<<endl;
            return;
        }

        cout<<arr[front]<<endl;
    }

    bool isEmpty(){
        return count==0;
    }

    void display(){
        if(count==0){
            cout<<"Queue is empty nothing to dispaly"<<endl;
            return;
        }

        for(int i = 0; i < count; i++) {
            cout << arr[(front + i) % cap] << " -> ";
        }
        cout << "END" << endl;
    }

};



int main(){
    MyQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.display();

    q.pop();
    q.peek();

    q.push(40);
    q.push(50);
    q.push(60); 
    q.display();

}