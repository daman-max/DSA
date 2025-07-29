#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    vector<int> v = {4,3,18,9,5,12,27};
    int target = 19;

    sort(v.begin(),v.end());

    for(int i=0;i<v.size()-2;i++){

        int start = i+1;
        int end = v.size()-1;

        while(start<end){

            int sum = v[i]+v[start]+v[end];

            if(sum==target){
                cout<<v[i]<<" "<<v[start]<<" "<<v[end]<<endl;
                start++;
                end--;
            }else if(sum>target){
                end--;
            }else{
                start++;
            }

        }
    }

}