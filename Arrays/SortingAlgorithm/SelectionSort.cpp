#include<iostream>
using namespace std;

void Selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndx = i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndx]){
                minIndx=j;
            }
        }

        swap(arr[i],arr[minIndx]);

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n=5;
    int arr[n]={5,3,8,4,2};

    Selectionsort(arr,n);

}