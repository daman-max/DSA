#include <iostream>
#include <vector>
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

    void createEdge(int u, int dest) {
        adjList[u].push_back(dest);
        adjList[dest].push_back(u);
    }

    void removeEdge(int u, int v) {
        adjList[u].remove(v);
        adjList[v].remove(u);
    }

    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << " -> ";
            for (int x : adjList[i])
                cout << x << " ";
            cout << endl;
        }
    }

    void helper(int u, vector<bool>& vis) {
        vis[u] = true;
        cout << u << " ";
        for (int v : adjList[u]) {
            if (!vis[v]) {
                helper(v, vis);
            }
        }
    }

    void DFS(int start) {
        vector<bool> vis(V, false);
        helper(start, vis);
        cout << endl;
    }

    ~Graph() {
        delete[] adjList;
    }
};

int main() {
    Graph g(6);

    g.createEdge(0, 1);
    g.createEdge(0, 2);
    g.createEdge(0, 4);
    g.createEdge(1, 3);
    g.createEdge(1, 5);
    g.createEdge(2, 4);
    g.createEdge(3, 5);
    g.createEdge(4, 5);

    cout << "DFS Traversal starting from vertex 0: ";
    g.DFS(0);

    return 0;
}