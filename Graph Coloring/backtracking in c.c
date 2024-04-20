#include <stdio.h>
    int V;
    int isSafe(int v, int graph[V][V],int color[], int c){ 
        for (int i = 0; i < V; i++) 
            if ( 
                graph[v][i] && c == color[i]) 
                return 0; 
        return 1; 
    } 
    int colour(int graph[V][V], int m,int color[], int v){ 
 
        if (v == V) 
            return 1; 
 
        for (int c = 1; c <= m; c++) { 
            if (isSafe( 
                    v, graph, color, c)) { 
                color[v] = c; 
                if ( colour(graph, m, color, v + 1)== 1) 
                    return 1; 
                color[v] = 0; 
            } 
        } 
        return 0; 
    } 
    int graphColoring(int graph[V][V], int m){ 
        int color[V]; 
        for (int i = 0; i < V; i++) 
            color[i] = 0; 
        if ( 
            colour(graph, m, color, 0)== 0) { 
            return 0; 
        } 
        return 1; 
    } 
    int main(){ 
        int t;
        scanf("%d",&t);
        while(t--){
          int e;
          scanf("%d %d",&V,&e);
          int graph[V][V];
          for(int i=0;i<V;i++){
            for(int j=0;j<V;j++)
             graph[i][j]=0;
          }
          while(e--){
            int u,v;
            scanf("%d %d",&u,&v);
            graph[u][v]=1;
            graph[v][u]=1;
          }
          int m; // Number of colors 
          scanf("%d",&m);
          printf("%d\n",graphColoring(graph, m)); 
        }
        return 0; 
    } 
