#include<iostream>
#include<vector>
using namespace std;

void convertToCSR(vector<vector<int>> v, int rows, int columns) {
    vector<int> values;
    vector<int> colIndex;
    vector<int> rowPtr;

    rowPtr.push_back(0);
    int count = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(v[i][j] != 0) {
                values.push_back(v[i][j]);
                colIndex.push_back(j);
                count++;
            }
        }
        rowPtr.push_back(count);
    }

    cout << "Values: ";
    for(int val : values){
        cout << val << " ";
    } 
    cout << endl;

    cout << "ColIndex: ";
    for(int col : colIndex){
        cout << col << " ";
    } 
    cout << endl;

    cout << "RowPtr: ";
    for(int ptr : rowPtr){
        cout << ptr << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };

    convertToCSR(matrix, 4, 5);
}
