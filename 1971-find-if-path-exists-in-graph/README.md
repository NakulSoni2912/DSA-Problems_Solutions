# 1971. Find If Path Exists in Graph

## Intuition
Build an adjacency list representation of the undirected graph. Use DFS to traverse from the source node, marking visited nodes to avoid cycles. Return true if destination is reachable.

## Approach
**DFS Graph Traversal:**

1. Build adjacency list from edges:
   - For each edge `[u, v]`:
     - Add v to u's neighbors
     - Add u to v's neighbors (undirected)

2. Define `dfs(node, destination, graph, visited)`:
   - If `node == destination`, return true
   - Mark `node` as visited
   - For each neighbor of node:
     - If not visited and `dfs(neighbor, destination, graph, visited)` returns true:
       - Return true (path found)
   - Return false (no path from this node)

3. Call `dfs(source, destination, graph, visited)` and return result.

**Example:** `n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2`
- Adjacency list: {0: [1,2], 1: [0,2], 2: [1,0]}
- DFS from 0:
  - Visit 0 → not destination
  - Check neighbor 1 → DFS(1)
    - Visit 1 → not destination
    - Check neighbor 2 → DFS(2)
      - node == destination → return true

## Time Complexity
**O(n + e)** where n = number of nodes, e = number of edges. Visit each node and edge once.

## Space Complexity
**O(n + e)** — Adjacency list storage (n + e) + recursion stack (O(n) worst case).
