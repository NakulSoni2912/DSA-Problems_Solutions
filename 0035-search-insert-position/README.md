# 35. Search Insert Position

## Intuition
In a sorted array, if the target isn't found, the `low` pointer will position exactly where the target should be inserted to maintain sorted order.

## Approach
**Binary Search with Insertion Position:**

1. Initialize `low = 0` and `high = n - 1`.
2. While `low <= high`:
   - Calculate `mid` using `low + (high - low) / 2`
   - If `nums[mid] == target`, return `mid`
   - If `nums[mid] < target`, move `low = mid + 1`
   - Otherwise, move `high = mid - 1`
3. Return `low` — this is the insertion position if target not found, or the target index if found.

**Example:** `nums = [1,3,5,6], target = 5` → Return 2  
**Example:** `nums = [1,3,5,6], target = 7` → Return 4

## Time Complexity
**O(log n)** — Standard binary search.

## Space Complexity
**O(1)** — Only constant extra space.