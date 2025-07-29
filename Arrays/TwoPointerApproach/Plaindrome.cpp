#include<iostream>
#include<string>
using namespace std;

bool isPalindromeArray(int N,int arr[]){
    int start =0,end=N-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            return false;

        }

        start++;
        end--;
    }

    return true;
}

bool isPalindromeString(int N,string s){
    int start =0,end=N-1;
    while(start<end){
        if(s[start]!=s[end]){
            return false;

        }

        start++;
        end--;
    }

    return true;
}

int main(){
    int N=5;
    int arr[N]={1,2,3,2,1};

    if(isPalindromeArray(5,arr)){
        cout<<"Array is palindrome"<<endl;
    }else{
        cout<<"Array is not palindrome"<<endl;
    }

    int n=6;
    string s = "racecas";

    if(isPalindromeString(6,s)){
        cout<<"String is palindrome"<<endl;
    }else{
        cout<<"String is not palindrome"<<endl;
    }
    

}