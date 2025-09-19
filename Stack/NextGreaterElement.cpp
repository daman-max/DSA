#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    const int n = 5;
    int arr[n] = {6,8,0,1,3};
    stack<int> s;
    vector<int> ans(n,0);

    for(int i=n-1;i>=0;i--){
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i]=-1;
        }else{
            ans[i]=s.top();
        }

        s.push(arr[i]);

    }

    for(int c : ans){
        cout<<c<<",";
    }
    cout<<endl;

}