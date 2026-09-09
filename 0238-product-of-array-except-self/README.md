# 238. Product of Array Except Self

## Intuition
For each index i, the product of all elements except nums[i] = (product of all elements to the left) × (product of all elements to the right).

## Approach
**Prefix and Suffix Arrays:**

1. Create prefix array: `pref[i]` = product of all elements before index i
   - `pref[0] = 1`
   - `pref[i] = nums[i-1] * pref[i-1]`

2. Create suffix array: `suf[i]` = product of all elements after index i
   - `suf[n-1] = 1`
   - `suf[i] = nums[i+1] * suf[i+1]`

3. Result: `res[i] = pref[i] * suf[i]`

**Example:** `nums = [1,2,3,4]`
- pref = [1, 1, 2, 6]
- suf = [24, 12, 4, 1]
- res = [1×24, 1×12, 2×4, 6×1] = [24, 12, 8, 6]

## Time Complexity
**O(n)** — Three passes: prefix computation, suffix computation, result computation.

## Space Complexity
**O(n)** — Two arrays (pref, suf) plus output array.