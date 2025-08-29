#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;;
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

    void push_front(int v){
        Node* newNode = new Node(v);
        newNode->next=head;
        head=newNode;
    }

    void push_back(int v){
        Node* newNode = new Node(v);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void push_at_position(int p,int v){
        if(p<=0){
            cout<<"Invalid Position"<<endl;
            return;
        }
        Node* newNode = new Node(v);
        if(p==1){
            push_front(v);
            return;
        }
        Node* temp = head;
        for(int i=1;i<p-1 && temp->next!=NULL;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front(){
        if(head==NULL){
            cout<<"Empty LinkedList Nothing to delete"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"Empty LinkedList Nothing to delete"<<endl;
            return;
        }
        if(head->next==NULL){
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        Node* LastNode = temp->next;
        temp->next = NULL;
        delete LastNode;
        return;
    }

    void pop_at_position(int n){
        if(n<=0){
            cout<<"Index isinvalid"<<endl;
            return;        
        }
        if(n==1){
            pop_front();
            return;
        }
        Node* temp = head;
        for(int i=1;i<n-1 && temp->next!=NULL;i++){
            temp = temp->next;
        }
        if(temp->next==NULL){
            cout<<"Position Out of Bounds"<<endl;
            return;
        }
        Node* Deletenode = temp->next;
        temp->next = Deletenode->next;
        delete Deletenode;
        return;

    }

    void ReverseLinkedList(){
        if(head==NULL){
            cout<<"Empty Nothing to reverse"<<endl;
        }
        Node* current = head;
        Node* previous = NULL;
        Node* next = NULL;
        while(current){
            next = current->next;
            current->next = previous;
            previous = current;
            current=next;
        }
        head = previous;
    }

    void  MiddleOfLinkedList(){
        if(head==NULL){
            cout<<"Empty Nothing To Find Out"<<endl;
            return;
        }
        Node* slow = head;
        Node* fast = head;
        while(fast->next&& fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<slow->data<<endl;
    }

    bool isPalindrome(){
        if(head==NULL){
            cout<<"Empty Nothing To Find Out"<<endl;
            return false;
        }
        Node* slow = head;
        Node* fast = head;
        while(fast->next&& fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* current = slow->next;
        Node* previous = NULL;
        Node* next = NULL;
        while(current){
            next = current->next;
            current->next = previous;
            previous = current;
            current=next;
        }
        Node* secondHalf = previous;
        Node* firstHalf = head;
        Node* second = secondHalf;
        bool palindrome = true;
        while(second){
            if(firstHalf->data!=second->data){
                palindrome = false;
                break;
            }
            firstHalf = firstHalf->next;
            second=second->next;
        }
        return palindrome;
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
    LinkedList l;
    l.push_front(1);
    l.push_front(3);
    l.push_back(5);
    l.push_back(1);
    l.push_back(3);
    
    cout<<l.isPalindrome();


}