# 33. Search in Rotated Sorted Array

## Intuition
A rotated sorted array has a specific property: it's divided into two sorted segments. At any midpoint, we can determine which half is properly sorted and use that information to decide whether the target lies in that half.

## Approach
**Modified Binary Search:**

1. Initialize left and right pointers to array boundaries.
2. Calculate mid and check if it's the target.
3. Identify which half (left or right) is sorted:
   - Left half is sorted if `nums[left] <= nums[mid]`
   - Otherwise, right half is sorted
4. Check if target lies in the sorted half:
   - If yes, search in that half
   - If no, search in the other half
5. Adjust pointers accordingly until found or boundaries cross.

**Example:** `nums = [4,5,6,7,0,1,2], target = 0`
- Left half `[4,5,6,7]` is sorted; target not in range → search right
- Right half `[0,1,2]` is sorted; target in range → search here
- Found at index 4

## Time Complexity
**O(log n)** — Binary search on the array, halving search space each iteration.

## Space Complexity
**O(1)** — Only constant extra space for pointers.