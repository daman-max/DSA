#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v = {1,22,3,15,5,6,17};
    int target = 18;

    sort(v.begin(),v.end());

    int start = 0;
    int end = v.size()-1;

    while(start<end){
        int sum = v[start] + v[end];

        if(sum==target){
            cout<<v[start]<<" "<<v[end]<<endl;
            start++;
            end--;
        }else if(sum>target){
            end--;
        }else{
            start++;
        }
    }

}