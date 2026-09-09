# 217. Contains Duplicate

## Intuition
Use a set to track seen elements. If we encounter an element already in the set, a duplicate exists.

## Approach
**Hash Set Tracking:**

1. Create an empty unordered_set.
2. Iterate through the array:
   - If element exists in set, return `true` (duplicate found)
   - Otherwise, insert element into set
3. Return `false` if loop completes (no duplicates).

**Example:** `nums = [1,2,3,1]`
- Check 1 → not in set → insert
- Check 2 → not in set → insert
- Check 3 → not in set → insert
- Check 1 → found in set → return true

## Time Complexity
**O(n)** — Single pass through array; set operations (insert, count) are O(1) average.

## Space Complexity
**O(min(n, unique_elements))** — Set stores at most n elements or stops early.