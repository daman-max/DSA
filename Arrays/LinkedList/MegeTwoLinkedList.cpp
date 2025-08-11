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
    Node* getHead(){
        return head;
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
    void mergeLinkedList(Node* head1, Node* head2){
        Node dummy(0);
        Node* tail = &dummy;
        while(head1 && head2){
            if(head1->data <= head2->data){
                tail->next = head1;
                head1 = head1->next;
            } else {
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }
        if(head1) tail->next = head1;
        if(head2) tail->next = head2;
        head = dummy.next;
    }

    void middleNode(){
        if (head == NULL) return; 

        Node* temp = head;
        Node* last = head;

    
        while(last != NULL && last->next != NULL){
            temp = temp->next;
            last = last->next->next;
        }

    
        cout << temp->data;
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
    LinkedList list1, list2;
    list1.InsertAtLast(1);
    list1.InsertAtLast(3);
    list1.InsertAtLast(5);
    list2.InsertAtLast(2);
    list2.InsertAtLast(4);
    list2.InsertAtLast(6);
    Node* head1 = list1.getHead();
    Node* head2 = list2.getHead();
    LinkedList mergedList;
    mergedList.mergeLinkedList(head1, head2);
    mergedList.display();
    list1.middleNode();
    return 0;
}
