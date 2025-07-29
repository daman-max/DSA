#include<iostream>
#include<vector>
using namespace std;

void convertToCSC(vector<vector<int>> v , int row,int column){
    vector<int> values;
    vector<int> RowsIndex;
    vector<int> ColPtr;

    ColPtr.push_back(0);
    int count = 0;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(v[i][j]!=0){
                values.push_back(v[i][j]);
                RowsIndex.push_back(i);
                count++;
            }
        }
        ColPtr.push_back(count);
    }

        cout << "Values: ";
    for(int val : values){
        cout << val << " ";
    } 
    cout << endl;

    cout << "RowIndex: ";
    for(int ptr : RowsIndex){
        cout << ptr << " ";
    }
    cout<<endl;
    
    cout << "ColPtr: ";
    for(int col : ColPtr){
        cout << col << " ";
    } 
    cout << endl;


}



int main(){

    vector<vector<int>> matrix = {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };

    convertToCSC(matrix, 4, 5);

}