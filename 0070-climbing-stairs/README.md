# 70. Climbing Stairs

## Intuition
To reach step `n`, you can either come from step `n-1` (1 step) or step `n-2` (2 steps). This is a Fibonacci-like recurrence: `f(n) = f(n-1) + f(n-2)`.

## Approach
**Dynamic Programming (Space-Optimized):**

1. Base cases: For n ≤ 3, return n directly.
2. Use two variables instead of an array:
   - `prev2 = f(2) = 2`
   - `prev1 = f(3) = 3`
3. Iterate from 4 to n:
   - `curr = prev1 + prev2` (sum of previous two ways)
   - Update: `prev2 = prev1`, `prev1 = curr`
4. Return `prev1`.

**Example:** `n = 4`
- f(1) = 1, f(2) = 2, f(3) = 3
- f(4) = f(3) + f(2) = 3 + 2 = 5

## Time Complexity
**O(n)** — Single loop from 4 to n.

## Space Complexity
**O(1)** — Only two variables used; no array needed.