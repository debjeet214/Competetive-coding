//  Depth First Traversal (or DFS) for a graph is similar to Depth First Traversal of a tree. The only catch here is, that, unlike trees, graphs may contain cycles (a node may be visited twice). To avoid processing a node more than once, use a boolean visited array. A graph can have more than one DFS traversal.


#include <bits/stdc++.h>
using namespace std;
class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;
	void addEdge(int v, int w);
	void DFS(int v);
};

void Graph::addEdge(int v, int w){
	// Add w to v’s list.
	adj[v].push_back(w);
}

void Graph::DFS(int v){
	visited[v] = true;
	cout << v << " ";
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}

// Driver code
int main(){
	Graph g;
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";
	g.DFS(2);
	return 0;
}
