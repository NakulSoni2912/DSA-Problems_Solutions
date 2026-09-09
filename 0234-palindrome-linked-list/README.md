# 234. Palindrome Linked List

## Intuition
Use recursion to traverse to the end of the list. During backtracking, compare nodes from both ends: one pointer (`left`) advances forward, the other (`right`) comes back via recursion stack.

## Approach
**Recursive Two-Pointer Comparison:**

1. Maintain a class variable `left` pointing to the head.
2. Define `check(right)` that recursively:
   - Base case: If `right == NULL`, return `true`
   - Recurse to `right->next` first (reach end)
   - During backtracking, compare `left->val` with `right->val`
   - Move `left` forward: `left = left->next`
   - Return comparison result
3. Call `check(head)` from `isPalindrome()`.

**Example:** `head = [1,2,2,1]`
- Recurse: 1 → 2 → 2 → 1 → NULL
- Compare during backtracking:
  - left=1, right=1 ✓, move left forward
  - left=2, right=2 ✓, move left forward
  - return true

## Time Complexity
**O(n)** — Visit each node once during recursion.

## Space Complexity
**O(n)** — Recursion stack depth equals list length.