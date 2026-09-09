# 219. Contains Duplicate II

## Intuition
Maintain a sliding window of size k. Use a set to track elements in the current window. If any element appears twice within the window, return true.

## Approach
**Sliding Window with Hash Set:**

1. Use an unordered_set to track elements in current window.
2. Iterate through each index `i`:
   - If `i > k`, remove element at `i - k - 1` from set (slide window)
   - Check if `nums[i]` exists in set → return `true` (duplicate within distance k)
   - Insert `nums[i]` into set
3. Return `false` if loop completes (no duplicates within distance k).

**Example:** `nums = [99,99], k = 2`
- i=0: Insert 99 → set = {99}
- i=1: Check 99 → found in set → return true

**Example:** `nums = [1,2,3,1], k = 3`
- Window maintains at most k=3 elements
- When second 1 appears at index 3, it's within distance 3

## Time Complexity
**O(n)** — Single pass; each element inserted/removed once from set (O(1) operations).

## Space Complexity
**O(min(n, k))** — Set stores at most k elements.