// Merging two sorted arrays.
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> v1, vector<int> v2,int n1,int n2){
    vector<int> v3;
    int  start = 0;
    int end = 0;

    while(start<n1 && end<n2){

        if(v1[start]<v2[end]){
            v3.push_back(v1[start]);
            start++;
        }else{
            v3.push_back(v2[end]);
            end++;
        }
    }  

    while(start<n1){
        v3.push_back(v1[start]);
        start++;
    }

    while(end<n2){
        v3.push_back(v2[end]);
        end++;
    }
    
    for(int i=0;i<n1+n2;i++){
        cout<<v3[i]<<" ";
    }

}

    


int main(){
    vector<int> v1 = {2,4,6,8,9};
    vector<int> v2 = {1,3,4,7,12};
    int n1 = v1.size();
    int n2 = v2.size();

    merge(v1,v2,n1,n2);

    

}
