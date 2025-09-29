#include<iostream>
using namespace std;

int Partition(int arr[],int P,int r){
    int x = arr[r];
    int i = P-1;

    for(int j=P;j<r;j++){  // Fixed the loop condition from r-1 to r
        if(arr[j]<=x){
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[r]);
    return i+1;
}

void quickSort(int arr[],int low,int high){
    if(low>=high){
        return;
    }

    int temp = Partition(arr,low,high);
    quickSort(arr,low,temp-1);
    quickSort(arr,temp+1,high);
}

int main(){
    const int N=8;
    int arr[N]={2,8,7,1,3,5,6,4};

    cout << "Original array: ";
    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr,0,N-1);

    cout << "Sorted array: ";
    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
