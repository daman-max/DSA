// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={2,1,5,1,3,2};
//     int l=3;

//     int maxsum=0;

//     for(int i=0;i<6-l;i++){
//         int sum=0;
//         for(int j=i;j<i+l;j++){
//             sum+=arr[j];
//         }

//         maxsum=max(maxsum,sum);
//     }

//     cout<<maxsum;


// }


//Sliding Window Approach
#include<iostream>
using namespace std;

int main(){
    int nums[]={2,1,5,1,3,2};
    int n = 6;
    int k = 3;

    int sum = 0;
    int maxsum = -1;

    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    if(maxsum<sum){
        maxsum=sum;
    }

    for(int i=k;i<n;i++){
        sum+=nums[i]-nums[i-k];
        if(maxsum<sum){
            maxsum=sum;
        }
    }

    cout<<"Max Sum: "<<maxsum;
}