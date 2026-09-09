# 403. Frog Jump

## Intuition
At each stone, track possible jump lengths that got us there. From the current stone, we can jump k-1, k, or k+1 steps (where k is the jump length we used to reach current). Use memoization to avoid redundant computation.

## Approach
**Memoization with Jump Length Tracking:**

1. Define `solve(stones[], idx, jump)`:
   - Base case: If `idx < 0 || idx >= stones.size()`, return false
   - If `idx == stones.size() - 1`, return true (reached last stone)
   - If `dp[idx][jump] != -1`, return cached result
   
2. Try three next jumps: `k-1, k, k+1`
   - For each `nextJump`:
     - Skip if `nextJump <= 0`
     - Calculate `nextPosition = stones[idx] + nextJump`
     - Use binary search to find if `nextPosition` exists in stones
     - If found at index `nextIdx`, recurse with `solve(stones, nextIdx, nextJump)`
     - If any recursion succeeds, cache and return true
   
3. Cache false and return if no valid jump found.

4. Call `solve(stones, 0, 0)` from main function.

**Example:** `stones = [0,1,3,5,6,7,8]`
- At stone 0: jump 1 → stone 1
- At stone 1: jump 2 → stone 3
- At stone 3: jump 2 → stone 5 (or jump 3 → skip, etc.)
- Continue until reaching last stone

## Time Complexity
**O(n²)** — n stones, each with jump values up to O(n); memoization stores O(n²) states.

## Space Complexity
**O(n²)** — DP array of size [2001][2001] (per problem constraints) + recursion stack.