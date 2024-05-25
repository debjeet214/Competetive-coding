# DFS
DFS (Depth-first search) is a technique used for traversing trees or graphs. Here backtracking is used for traversal. In this traversal first, the deepest node is visited and then backtracks to its parent node if no sibling of that node exists.

# Difference between dfs in tree and graph

In the graph, there might be cycles and disconnectivity. Unlike the graph, the tree does not contain a cycle and are always connected. So DFS of a tree is relatively easier. We can simply begin from a node, then traverse its adjacent (or children) without caring about cycles. And if we begin from a single node (root), and traverse this way, it is guaranteed that we traverse the whole tree as there is no dis-connectivity.

# COMPLEXITIES :
Time Complexity: O(N)
Auxiliary Space: O(log N)

# Types of DFS in Tree

1. INORDER TRAVERSAL ()
2. PREORDER TRAVERSAL ()
3. POSTORDER TRAVERSAL ()
