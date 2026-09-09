# 39. Combination Sum

## Intuition
Allow reuse of elements by considering each element multiple times. Use backtracking to explore all valid combinations that sum to the target.

## Approach
**Backtracking with Reuse:**

1. Define a recursive helper `solve(i, candidates, target, curr, ans)`:
   - Base case: If `i == candidates.size()`, check if `target == 0` and add `curr` to answer
   - If `candidates[i] <= target`, include it and recurse with same index (reuse)
   - Always recurse to next index without including current element
   - Backtrack by removing the element after recursion

2. Start recursion from index 0 with target and empty current combination.

**Example:** `candidates = [2,3,6,7], target = 7`
- Include 2: recurse with target 5 → find [2,2,3]
- Skip 2: move to 3 → find [3,3,1] and [7]
- Result: [[2,2,3], [7]]

## Time Complexity
**O(N^(T/M))** where N = candidates size, T = target, M = minimal value. Worst case explores exponential combinations.

## Space Complexity
**O(T/M)** for recursion depth plus output storage.