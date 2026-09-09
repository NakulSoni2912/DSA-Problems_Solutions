# 46. Permutations

## Intuition
Use `next_permutation()` to generate permutations in lexicographic order. Sorting first ensures we start from the smallest permutation and generate all unique permutations.

## Approach
**STL-based Permutation Generation:**

1. Sort the array to get the first lexicographically smallest permutation.
2. Use `do-while` loop with `next_permutation()`:
   - Add current permutation to result
   - Call `next_permutation()` to get next lexicographically ordered permutation
   - Continue until no next permutation exists
3. Return all collected permutations.

**Example:** `nums = [1,2,3]`
- Sorted: [1,2,3]
- Permutations: [1,2,3] → [1,3,2] → [2,1,3] → [2,3,1] → [3,1,2] → [3,2,1]

## Time Complexity
**O(n! × n)** — Generate n! permutations, each taking O(n) to add to result.

## Space Complexity
**O(n)** excluding output. Recursion stack isn't used here; `next_permutation()` works in-place.