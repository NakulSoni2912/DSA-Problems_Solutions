# 258. Add Digits

## Intuition
Recursively sum digits until only a single digit remains. Base case: if num < 10, it's already a single digit.

## Approach
**Recursive Digit Sum:**

1. Base case: If `num < 10`, return `num`
2. Extract and sum all digits of num:
   - `sum = 0`
   - While `num > 0`: `sum += num % 10`, `num /= 10`
3. Recursively call `addDigits(sum)`

**Example:** `num = 38`
- Sum digits: 3 + 8 = 11
- Recurse: Sum 1 + 1 = 2
- Return 2

**Example:** `num = 0`
- Already single digit → return 0

## Time Complexity
**O(log num × log(log num))** — Each recursion sums O(log num) digits; recursion depth is O(log(log num)) since digit sum decreases exponentially.

## Space Complexity
**O(log(log num))** — Recursion stack depth.

---

**Optimization Note:** There's a mathematical pattern (digital root formula) that solves this in O(1): `result = 1 + (num - 1) % 9` for num > 0, and 0 for num = 0. However, the provided solution uses recursion.