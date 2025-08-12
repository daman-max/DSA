#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{

    public:
    Node* next;
    int data;
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

    void InsertAtLast(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }


// Sorting Using Swap Function InBuilt

    // void sortLL(){
    //     vector<int> arr;
    //     Node* temp = head;
    //     while (temp != NULL){
    //         arr.push_back(temp->data);
    //         temp = temp->next;
    //     }
    //     sort(arr.begin(), arr.end());
    //     temp = head;

    //     for (int i=0; temp!=NULL; i++){
    //         temp->data = arr[i];
    //         temp = temp->next;
    //     }
    // }


// Without Using Swap InBuilt

    // void SortList(){

    //     if(head == NULL || head->next == NULL) return;

    //     Node* end = NULL;
    //     while (end != head) {
    //         Node* current = head;
    //         Node* prev = NULL;
    //         while (current->next != end) {
    //             if (current->data > current->next->data) {
    //                 int temp = current->data;
    //                 current->data = current->next->data;
    //                 current->next->data = temp;
    //             }
    //             current = current->next;
    //         }
    //         end = current; 
    //     }

    // }

    Node* getMiddle(Node* head){
        if(!head) return head;

        Node* slow = head;
        Node* fast = head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    Node* merge(Node* left, Node* right){
        if(!left) return right;
        if(!right) return left;

        Node* result = NULL;
        if(left->data <= right->data){
            result = left;
            result->next = merge(left->next , right);
        }else{
            result = right;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }


};

int main(){

    LinkedList list;
    list.InsertAtLast(11);
    list.InsertAtLast(1);
    list.InsertAtLast(22);
    list.InsertAtLast(5);
    list.InsertAtLast(17);
    cout<<"Before Sorting :: "; 
    list.display();
    // list.SortList();
    cout<<"After  Sorting :: "; 
    list.display();



}