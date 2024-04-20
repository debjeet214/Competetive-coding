
<h3><b>Graph Coloring</b></h3>

Graph coloring refers to the problem of coloring vertices of a graph in such a way that no two adjacent vertices have the same color. This is also called the vertex coloring problem. If coloring is done using at most m colors, it is called m-coloring.

<h3><b>Chromatic Number:</b></h3>

The minimum number of colors needed to color a graph is called its chromatic number. For example, the following can be colored a minimum of 2 colors. Assign colors one by one to different vertices, starting from vertex 0. Before assigning a color, check if the adjacent vertices have the same color or not. If there is any color assignment that does not violate the conditions, mark the color assignment as part of the solution. If no assignment of color is possible then backtrack and return false.


<h2>pseudocode to Solve M Coloring Problem:</h2>
colour():

If index == number.of.vertices, return TRUE.

else, for every k= 1 to M :

assign color to the current vertex, v, (color[v]=k)

if colour(graph,vertex+1,color)==TRUE, return true

else ,

mark the colour as unassigned, (colour[v]=0) (backtracking step).

If none of the combination satisfies, return FALSE.


<b>Complexity Analysis :
In this method each vertex has M different choices of colors. So the total time complexity is MV , where M is the number of colours and V is the number of vertices.</b>
