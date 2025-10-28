#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
    vector<int> heap;  

public:

    int parent(int i) { 
        return (i - 1) / 2; 
    }

    int leftChild(int i) { 
        return (2 * i + 1);
    }

    int rightChild(int i) { 
        return (2 * i + 2); 
    }

    void insert(int value) {
        heap.push_back(value); 
        int i = heap.size() - 1;

        while (i != 0 && heap[parent(i)] > heap[i]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    void display() {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main() {
    MinHeap h;

    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(10);
    h.insert(40);
    h.insert(5);
    h.display();

}
