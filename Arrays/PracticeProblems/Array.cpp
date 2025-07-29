#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int nums[5] = {0};//default value as something to 
    //all the indexes of the given size

    nums[5] = 45;
    cout<<nums[5]<<endl;

    vector<int> vec;
    vec.push_back(35);
    cout<<vec.capacity()<<endl;
    vec.push_back(15);
    vec.push_back(25);
    vec.push_back(45);
    cout<<vec.capacity()<<endl;
    vec.push_back(55);
    vec.push_back(65);
    vec.push_back(75);
    vec.push_back(85);
    cout<<vec.capacity()<<endl;

    vector<int> vec2(5,6);
    cout<<vec2.size()<<endl;
    cout<<vec2.at(0)<<"----------------"<<vec2[0]<<endl;

}
