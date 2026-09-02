class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3)
            return n;

        int prev2 = 2;
        int prev1 = 3;

        for (int i = 4; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};