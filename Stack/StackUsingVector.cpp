#include<iostream>
#include<vector>
using namespace std;

class MyStack{

private:
    vector<int> v;

public:
    void push(int value){
        v.push_back(value);
        cout<<value<<" pushed into stack"<<endl;
    }

    int pop(){
        if(v.empty()){
            cout<<"Stack is empty can't pop out the value"<<endl;
            return -1;
        }

        int topItem = v.back();
        v.pop_back();
        cout<<topItem<<" removed from stack"<<endl;

        return topItem;
    }

    int top(){
        if(v.empty()){
            cout<<"No Top value Stack is empty"<<endl;
            return -1;
        }

        int t = v[v.size()-1];
        cout<<t<<" is the Top "<<endl;
        return v[v.size()-1];
    }

    void display(){
        if(v.empty()){
            cout<<"Stack is empty"<<endl;
            return;
        }

        for(int i=v.size()-1;i>=0;i--){
            cout<<"----"<<endl;
            cout<<"|"<<v[i]<<"|"<<endl;
        }
        
    }

};

int main(){
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.top();
    s.display();
}
