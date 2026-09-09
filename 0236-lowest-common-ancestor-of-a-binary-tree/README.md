# 236. Lowest Common Ancestor of a Binary Tree

## Intuition
The LCA of p and q is the deepest node that has both p and q in its subtree (or is p or q itself). Use post-order DFS: if both left and right subtrees contain targets, current node is the LCA.

## Approach
**Post-Order DFS:**

1. Define recursive function `lowestCommonAncestor(root, p, q)`:
   - Base case: If `root == NULL || root == p || root == q`, return `root`
   - Recurse on left subtree: `left = lowestCommonAncestor(root->left, p, q)`
   - Recurse on right subtree: `right = lowestCommonAncestor(root->right, p, q)`
   - If both `left` and `right` are non-NULL, return `root` (LCA found)
   - Return whichever of `left` or `right` is non-NULL (or NULL if both are)

2. Start from root.

**Example:** Tree [3,5,1,6,2,0,8,null,null,7,4], p=5, q=1
- Recurse left (5): returns 5 (base case)
- Recurse right (1): returns 1 (base case)
- Both left and right non-NULL → return 3

## Time Complexity
**O(n)** — Visit each node once in worst case.

## Space Complexity
**O(h)** where h = tree height. Recursion stack depth is h.