#include <iostream>
#include <list>
using namespace std;

class Graph {
public:
    int V;
    list<int>* adjList;

    Graph(int vertices) {
        V = vertices;
        adjList = new list<int>[V];
    }

    void createEdge(int source, int destination) {
        adjList[source].push_back(destination);
        adjList[destination].push_back(source);
    }

    void removeEdge(int u, int v) {
        // Remove v from u’s list
        for (auto it = adjList[u].begin(); it != adjList[u].end(); ) {
            if (*it == v)
                it = adjList[u].erase(it);  // erase returns next iterator
            else
                ++it;
        }

        // Remove u from v’s list
        for (auto it = adjList[v].begin(); it != adjList[v].end(); ) {
            if (*it == u)
                it = adjList[v].erase(it);
            else
                ++it;
        }
    }

    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << " -> ";
            for (int x : adjList[i])
                cout << x << " ";
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);

    g.createEdge(0, 1);
    g.createEdge(1, 2);
    g.createEdge(2, 3);
    g.createEdge(3, 4);
    g.createEdge(1, 4);

    cout << "Graph before removing edges:\n";
    g.printGraph();

    cout << "\nRemoving edge (1, 4)...\n";
    g.removeEdge(1, 4);

    cout << "\nGraph after removing edge:\n";
    g.printGraph();

    return 0;
}