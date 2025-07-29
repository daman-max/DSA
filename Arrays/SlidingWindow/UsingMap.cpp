#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    map<char,int> charMap;
    charMap['C'] = 1;
    charMap['D'] = 2;
    charMap['A'] = 3;

    for(const auto &m: charMap){
        cout<<m.first<<"-----------"<<m.second<<endl;
    }
    
    cout<<"--------------------------------"<<endl;

    unordered_map<char,int> charmap;
    charmap['C'] = 1;
    charmap['D'] = 2;
    charmap['A'] = 3;

    for(const auto &n: charmap){
        cout<<n.first<<"-----------"<<n.second<<endl;
    }


}