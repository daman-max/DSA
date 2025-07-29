#include<iostream>
using namespace std;
bool fun(int arr[],int n,int sum){
    int windowSum=0,high=0,low=0;
    for(int i=low;i<n;i++){
        while(windowSum<sum && high<n){
            windowSum+=arr[high];
            high++;
        }

        if(windowSum==sum){
            return true;
        }

        windowSum-=arr[i];
        
    }

    return false;
}


int main(){

    int n=6;
    int arr[6]={1,4,20,3,10,5};
    int sum=33;

    if(fun(arr,n,sum)){
        cout<<"True"<<endl;
    }else{
        cout<<"Flase"<<endl;
    }
   
}