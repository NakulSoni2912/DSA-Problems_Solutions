# 322. Coin Change

## Intuition
For each coin, decide to use it or not. Recursively find minimum coins needed to make the remaining amount. Memoize results to avoid redundant calculations.

## Approach
**Memoization (Top-Down DP):**

1. Define `solve(amount, coins, dp)`:
   - Base case: If `amount == 0`, return 0 (no coins needed)
   - If `amount < 0`, return 1e9 (impossible)
   - If `dp[amount] != -1`, return cached result
   - Try each coin:
     - `ans = min(ans, 1 + solve(amount - coin, coins, dp))`
   - Memoize and return `dp[amount] = ans`

2. Initialize `dp` array with -1.
3. Call `solve(amount, coins, dp)`.
4. Return -1 if result is ≥ 1e9, otherwise return result.

**Example:** `coins = [1,2,5], amount = 5`
- Try coin 1: 1 + solve(4)
- Try coin 2: 1 + solve(3)
- Try coin 5: 1 + solve(0) = 1 + 0 = 1 ✓
- Minimum: 1

## Time Complexity
**O(amount × n)** where n = number of coins. Each amount state computed once; for each state, try n coins.

## Space Complexity
**O(amount)** — DP array size + recursion stack depth (worst case O(amount)).