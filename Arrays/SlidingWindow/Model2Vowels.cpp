#include<iostream>
#include<string>
using namespace std;

bool isVowel(char c){
    if(c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'){
        return true;
    }
    return false;
}

void CountVowels(string s,int n,int k ){
    int count = 0;

    for(int i=0;i<k;i++){
        if(isVowel(s[i])) count++;
    }

    cout<<count<<" ";

    for(int i=k;i<n;i++){
        if(isVowel(s[i-k])) count--;
        if(isVowel(s[i])) count++;
        cout<<count<<" ";
    }

}

int main(){
    string s = "abciiidef";
    int l = s.length();
    int k=3;

    CountVowels(s,l,k);

   
}