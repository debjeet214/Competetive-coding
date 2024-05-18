// Breadth First Search (BFS) is a graph traversal algorithm that explores all the vertices in a graph at the current depth before moving on to the vertices at the next depth level. It starts at a specified vertex and visits all its neighbors before moving on to the next level of neighbors. BFS is commonly used in algorithms for pathfinding, connected components, and shortest path problems in graphs.

//  


#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void bfs(vector<vector<int> >& adjList, int startNode,
         vector<bool>& visited){
    queue<int> q;
    visited[startNode] = true;
    q.push(startNode);
    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();
        cout << currentNode << " ";
        for (int neighbor : adjList[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}
void addEdge(vector<vector<int> >& adjList, int u, int v){
    adjList[u].push_back(v);
}

int main(){
    int vertices = 5;
    vector<vector<int> > adjList(vertices);
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 4);
    vector<bool> visited(vertices, false);
    cout << "Breadth First Traversal starting from vertex "
            "0: ";
    bfs(adjList, 0, visited);
    return 0;
}
