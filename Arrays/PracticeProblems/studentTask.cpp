// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     // Given an array of numbers arr = [1,4,3,2,5,6,5,3], your task is to count even and odd numbers and print count.

//     int arr[] = {1,4,3,2,5,6,5,3};

//     int size = sizeof(arr)/sizeof(arr[0]);
//     int evenCount = 0;
//     int oddCount = 0;


//     for(int i=0;i<size;i++){
//         if(arr[i]%2==0){
//             evenCount++;
//         }else{
//             oddCount++;
//         }

//     }

//     cout<<evenCount<<endl<<oddCount<<endl;

//     if(evenCount>oddCount){
//         cout<<"Even numbers are more than odd numbers"<<endl;
//     }else{
//         cout<<"Odd numbers are more than odd numbers"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]= {56,-1,2,3,34,-2,-40,45};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<size;i++){
//         if(arr[i]<0){
//             arr[i]=0;
//         }
//     }

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;

int LargestNumber(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }

    return max;
}

int SmallestNumber(int arr[],int size){
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
    }

    return min;
}

void PairSum(int arr[],int size){
    int target_sum = 7;

    for(int i=0;i<size;i++){
        if(i==0){
            if((arr[i]+arr[i+2])==target_sum){
                cout<<arr[i]<<","<<arr[i+1]<<endl;
            }
        }else if(i==size-1){
            if((arr[i]+arr[i-1])==target_sum){
                cout<<arr[i]<<","<<arr[i-1]<<endl;
            }
        }else{
            if((arr[i]+arr[i+1])==target_sum){
                cout<<arr[i]<<","<<arr[i+1]<<endl;
            }
        }
    }
}

int SecondLargestNumber(int arr[], int size) {
    int max2=arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max){
            max = arr[i];
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>max2 && arr[i]<max){
            max2=arr[i];
        }
    }

    return max2;
}

void deleteElement(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {23, 34, 12, 56, 78, 12, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int arr2[] = {1,3,4,2,5,12,5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << LargestNumber(arr, size)<<endl;
    cout << SmallestNumber(arr, size)<<endl;
    PairSum(arr2,size2);

    cout<<SecondLargestNumber(arr2,size2)<<endl;

    deleteElement(arr2,size2,5);

}
