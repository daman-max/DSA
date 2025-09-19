#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> s;

    vector<int> ans(n,0);

    for(int i=0;i<n;i++){
        while(s.size()>0 && s.top()>=arr[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i]=-1;
        }else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }

    for(int c:ans){
        cout<<c<<" ";
    }
   
}