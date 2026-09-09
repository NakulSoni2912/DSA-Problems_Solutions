# 1143. Longest Common Subsequence

## Intuition
Build a DP table where `dp[i][j]` represents the LCS length of `text1[0..i-1]` and `text2[0..j-1]`. If characters match, extend the LCS from the diagonal; otherwise, take the maximum from left or top.

## Approach
**2D Dynamic Programming:**

1. Create `dp[n+1][m+1]` table initialized to 0, where n = text1.size(), m = text2.size().
2. Iterate through each character:
   - For `i from 1 to n` and `j from 1 to m`:
     - If `text1[i-1] == text2[j-1]`:
       - `dp[i][j] = 1 + dp[i-1][j-1]` (extend LCS)
     - Else:
       - `dp[i][j] = max(dp[i-1][j], dp[i][j-1])` (take best from above or left)

3. Return `dp[n][m]` (LCS length of full strings).

**Example:** `text1 = "abc", text2 = "abc"`
- dp table:
  ```
      ""  a  b  c
  ""   0  0  0  0
  a    0  1  1  1
  b    0  1  2  2
  c    0  1  2  3
  ```
- LCS length: 3

## Time Complexity
**O(n × m)** — Fill each cell of n×m table.

## Space Complexity
**O(n × m)** — DP table storage.