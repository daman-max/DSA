// insert an element inside an array.

// #include<iostream>
// #include<vector>
// using namespace std;

// void insert(vector<int> &v,int index, int value){

//     if(index < 0 || index > v.size()) {
//         cout << "Invalid index" << endl;
//         return;
//     }

//     v.push_back(0); 

//    for(int i = v.size() - 1; i > index; i--) {
//         v[i] = v[i - 1];
//     }

//     v[index] = value;

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){

//     vector<int> v = {1,2,3,4,5};
//     int index = 2;
//     int value = 10;

//     insert(v,index,value);

// }

//-------------------------------------------

// Delete Element in array

// #include<iostream>
// #include<vector>
// using namespace std;

// void Delete(vector<int> &v,int index){

//     if(index < 0 || index > v.size()) {
//         cout << "Invalid index" << endl;
//         return;
//     }


//    for(int i = index; i <v.size(); i++) {
//         v[i]=v[i+1];
//     }

//     v.pop_back();

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){

//     vector<int> v = {1,2,3,4,5};
//     int index = 2;

//     Delete(v,index);

// }

//------------------------

//convert negative to positive

// #include<iostream>
// using namespace std;

// void toPositive(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             arr[i]=arr[i]*(-1);
//         }

//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// int main(){

//     int n=6;
//     int arr[n]={1,2,-1,-3,-4,5};
//     toPositive(arr,n);

// }

//------------------------------

//move zeroes to end

// #include<iostream>
// #include<vector>
// using namespace std;

// void Move(vector<int> v){
//     vector<int> n;

//     for(int i=0;i<v.size();i++){
//         if(v[i]!=0){
//             n.push_back(v[i]);
//         }
//     }

//     for(int i=0;i<v.size();i++){

//     }
// }


// int main(){

// }

//----------------------------------------

// #include<iostream>
// #include<map>
// using namespace std;

// void freq(int arr[], int size) {
//     map<int, int> freqMap;

//     for(int i = 0; i < size; i++) {
//         freqMap[arr[i]]++;
//     }

//     for(auto pair : freqMap) {
//         cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 2, 3, 3, 3, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     freq(arr, size);

//     return 0;
// }


//-------------------------------

//check for sorted array

// #include<iostream>
// using namespace std;

// void check(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]<=arr[i+1]){
//             continue;
//         }else{
//             cout<<"Not sorted"<<endl;
//             return;
//         }
//     }

//     cout<<"sorted"<<endl;
//     return;
// }

// int main(){

//     int n=5;
//     int arr[n]={1,2,3,6,5};

//     check(arr,n);

// }

//----------------------------

// #include<iostream>
// using namespace std;

// void repeating(int arr[],int n){

//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=i)
        
//     }

// }

// int main(){

//     int n=6;
//     int arr[n]={1,2,3,1,2,3};

//     repeating(arr,n);

// }


//-----------------------------

// #include<iostream>
// using namespace std;

// bool pairSum(int arr[],int n,int target){
//     int count=0;
//     bool pairFound = false;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 count++;
//                 pairFound = true;
//             }
//         }
//     }

//     if(pairFound){
//         cout<<count<<endl;
//         return true;
//     }else{
//         cout<<count<<endl;
//         return false;
//     }

// }

// int main(){

//     int n = 6;
//     int arr[n]={2,4,7,11,5,3};
//     int target = 9;
//     pairSum(arr,n,target);


// }

//---------------------------------------------