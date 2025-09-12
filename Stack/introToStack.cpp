#include <iostream>
using namespace std;
//already allocating memory in advance
#define MAX_SIZE 100

class StackArray{
    private:
    int arr[MAX_SIZE];
    int top;
    
    public:
    StackArray(){
        top = -1; // Indicates the stack is initially empty
    }
    bool isEmpty(){
        return (top == -1);
    }
    bool isFull(){
        return (top == MAX_SIZE - 1);
    }

    void push(int val){
        if (isFull()){
            cout << "Stack Overflow! Cannot Push" << val << endl;
            return;
        }
        arr[++top] = val;
        cout << val << " pushed to stack. " << endl;
    }

    int pop(){
        if (isEmpty()){
            cout << "Stack Underflow! Cannot Pop." << endl;
            return -1;
        }
        int value = arr[top--];
        return value;
    }

    int peek(){
        if (isEmpty()){
            cout << "Stack is Empty." << endl;
            return -1;
        }
        return arr[top];
    }



};



int main(){
    StackArray stack;
    stack.push(5);
    cout << stack.peek() << endl;

}