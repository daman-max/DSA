#include <iostream>
using namespace std;

class Deque {
    int* arr;
    int front;
    int rear;
    int size;

public:
    Deque(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    void push_front(int data) {
        if (isFull()) {
            cout << "Deque is full"<<endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + size) % size; 
        }
        arr[front] = data;
    }

    void push_back(int data) {
        if (isFull()) {
            cout << "Deque is full"<<endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size; 
        }
        arr[rear] = data;
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }

        if (front == rear) { 
            front = rear = -1;
        } else {
            rear = (rear - 1 + size) % size;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    Deque dq(5);

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.display();

    dq.pop_front();
    dq.display();

    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.display();

    dq.push_back(60); 

    dq.pop_back();
    dq.display();

    return 0;
}
