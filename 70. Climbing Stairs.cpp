// 70. Climbing Stairs
// Solution:-
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }

        // Initialize an array to store the number of ways to reach each step
        vector<int> dp(n + 1, 0);

        // Base cases: there is 1 way to reach the 0th and 1st step
        dp[0] = 1;
        dp[1] = 1;

        // Iterate through steps starting from the 2nd step
        for (int i = 2; i <= n; ++i) {
            // The number of ways to reach the current step is the sum of ways to reach the previous two steps
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        // The result is stored in the last element of the dp array
        return dp[n];
    }
};
// CODE:
