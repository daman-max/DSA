/* 
   GRAPHS(Non-Linear)
   =======

# Types of Graphs 
1. Undirectional Graph(Weighted and Unweighted)
2. Directional Graph

*/


#include <iostream>
#include <vector>
using namespace std;

void createEdge(vector<vector<int>>& matrix, int source, int destination) {
    matrix[source][destination] = 1; 
    matrix[destination][source] = 1; 
}

void display(vector<vector<int>>& matrix) {
    int V = matrix.size();
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V = 5; 

    vector<vector<int>> matrix(V, vector<int>(V, 0));

    createEdge(matrix, 0, 1);
    createEdge(matrix, 0, 4);
    createEdge(matrix, 1, 2);
    createEdge(matrix, 1, 3);
    createEdge(matrix, 1, 4);
    createEdge(matrix, 2, 3);
    createEdge(matrix, 3, 4);

    cout << "Adjacency Matrix:"<<endl;
    display(matrix);
    return 0;
}
