#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,0,1,1,0,1,0,0,1,0,1,1,1};
    int n = v.size();

    int start = 0;
    int end = n-1;

    while(start<end){
        if(v[start]==0 && v[end]==1){
            swap(v[start],v[end]);
            start++;
            end--;
        }else if(v[start]==1){
            start++;
        }else{
            end--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}