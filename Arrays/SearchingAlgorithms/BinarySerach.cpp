#include<iostream>
using namespace std;

// Simple Binary search
int BinarySearch(int arr[],int n,int target){
    int low=0,high=n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return -1;

}


//Recursive Binary Search
int RecursiveBinarySearch(int arr[],int low,int high,int target){
    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;

    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]>target){
        return RecursiveBinarySearch(arr,low,mid-1,target);

    }else{
        return RecursiveBinarySearch(arr,mid+1,high,target);
    }


}


int main(){
    int n = 14;
    int arr[n]={1,2,4,8,9,12,14,16,18,19,21,27,31,39};
    int target = 18;

    cout<<BinarySearch(arr,n,target)<<endl;
    cout<<RecursiveBinarySearch(arr,0,n-1,target);
}