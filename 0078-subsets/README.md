# 78. Subsets

## Intuition
For each element, decide to include it or not in the current subset. By exploring both choices recursively, generate all 2^n possible subsets.

## Approach
**Backtracking Recursion:**

1. Define `solve(index, nums, temp, result)`:
   - Add current `temp` to result (include empty subset initially)
   - For each index `i` from `index` to end:
     - Add `nums[i]` to `temp`
     - Recurse with `i + 1` to explore subsets starting from next element
     - Backtrack by removing `nums[i]`
2. Start with index 0 and empty `temp`.

**Example:** `nums = [1,2]`
- Add [] → result = [[]]
- Include 1: add [1] → result = [[], [1]]
  - Include 2: add [1,2] → result = [[], [1], [1,2]]
- Include 2 (from index 1): add [2] → result = [[], [1], [1,2], [2]]

## Time Complexity
**O(n × 2^n)** — Generate 2^n subsets, each taking O(n) to copy.

## Space Complexity
**O(n)** for recursion stack depth; output excludes storage count.