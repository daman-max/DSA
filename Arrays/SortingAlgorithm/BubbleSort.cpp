#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }

        if(flag){
            continue;
        }else{
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"---------------------"<<endl;

}

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int arr2[n]={5,3,8,2,4,2};

    bubblesort(arr,n);
    bubblesort(arr2,n);

}