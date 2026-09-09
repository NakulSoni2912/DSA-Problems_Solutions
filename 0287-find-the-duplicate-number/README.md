# 287. Find the Duplicate Number

## Intuition
After sorting, duplicate adjacent elements indicate a duplicate number. Since the array contains n+1 integers with values in range [1, n], at least one duplicate must exist.

## Approach
**Sort and Compare Adjacent Elements:**

1. Sort the array in ascending order.
2. Iterate through sorted array:
   - Compare each element with the next: `if nums[j] == nums[i]`
   - Return the duplicate
3. Return -1 if no duplicate found (shouldn't happen per problem constraints).

**Example:** `nums = [1,3,4,2,2]`
- Sorted: [1,2,2,3,4]
- Compare: 1≠2, 2==2 → return 2

## Time Complexity
**O(n log n)** — Sorting dominates; linear scan afterward is O(n).

## Space Complexity
**O(1)** or **O(n)** depending on sort implementation (in-place vs. extra space).

---

**Note:** This solution modifies the input array by sorting. Optimal approaches exist using Floyd's cycle detection (O(n) time, O(1) space) without modification, but the provided implementation uses sorting.