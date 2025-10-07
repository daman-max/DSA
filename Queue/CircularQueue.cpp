#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int currSize , cap;
    int f ,r;

    public:
    CircularQueue(int size){
        currSize = 0;
        cap = size;
        arr  = new int[cap];
        f = 0;
        r = -1;
    }

    void push(int data){
        if(isFull()){
            cout<<"Queue is already full can't push "<<data<<" in it"<<endl;
            return;
        }

        r = (r+1)%cap;
        arr[r] = data;
        currSize++;

        cout<<data<<" is pushed into the queue"<<endl;
        return;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue is Empty nothing to pop"<<endl;
        }

        f = (f+1)%cap;
        currSize--;
        cout<<"New Front is "<<arr[f]<<endl;
        return;

    }

    void front(){
        if(isEmpty()){
            cout<<"Nothing in Fornt Queue is Empty"<<endl;
        }

        cout<<arr[f]<<" is front of the queue"<<endl;
        return;
    }

    bool isEmpty(){
        return r == -1;
    }

    bool isFull(){

        return cap==currSize;

    }

    void display(){
        if(isEmpty()){
            cout<<"Nothing to display"<<endl;
            return;
        }

        for(int i=0;i<currSize;i++){
            cout<<arr[(f+i)%cap]<<" ";
        }

        cout<<endl;
    }
};


int main(){

    CircularQueue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.push(6);
    q.display();
    q.front();

    


}