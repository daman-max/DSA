#include<iostream>
using namespace std;

//Struct 
struct Node
{
    int data;
    Node* next;
};


int main(){

    Node* head = new Node();
    head->data = 45;
    head->next = NULL;

    Node* second = new Node();
    second->data = 56;
    second->next = NULL;

    Node* third = new Node();
    third->data = 51;
    third->next = NULL;

    Node* four = new Node();
    four->data = 90;
    four->next = NULL;

    // combining both the nodes

    head->next = second;
    second->next = third;
    third->next = four;

    //while Loop for checking

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;

}