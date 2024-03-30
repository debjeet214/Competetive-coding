#include <iostream>
#include <vector>
#include<cstring>
using namespace std;

#define INF 9999999
void inputMatrix(vector<vector<int>>& G, int V) { // to take input
cout<<"Enter the input values: "<<endl;
  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      cin >> G[i][j];
    }
  }
}
int main() {
  int V; // number of vertices
  cout << "Enter the number of vertices: ";
  cin >> V;

  // create a 2D vector to represent the adjacency matrix
  vector<vector<int>> G(V, vector<int>(V, 0));

  // take input of the adjacency matrix
  inputMatrix(G, V);

  // create an array to track selected vertices
  bool selected[V];
  memset(selected, false, sizeof(selected));

  int no_edge = 0;
  selected[0] = true;

  int x, y; // row and column numbers
  cout << "Edge : Weight" << endl;
  while (no_edge < V - 1) {
    int min = INF;
    x = 0;
    y = 0;

    for (int i = 0; i < V; i++) {
      if (selected[i]) {
        for (int j = 0; j < V; j++) {
          if (!selected[j] && G[i][j]) { // not in selected & there is edge
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    cout << x << " - " << y << " : " << G[x][y] << endl;
    selected[y] = true;
    no_edge++;
  }
  return 0;
}
