// 931. Minimum Falling Path Sum
// Solution:-

// CODE:
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
           // Get the number of rows in the matrix
        int n = matrix.size();

        // Create a copy of the matrix to store the minimum sum at each position
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Copy the first row from the original matrix to dp
        for (int col = 0; col < n; ++col) {
            dp[0][col] = matrix[0][col];
        }

        // Iterate through each row starting from the second row
        for (int row = 1; row < n; ++row) {
            for (int col = 0; col < n; ++col) {
                // Calculate the minimum sum for the current position
                dp[row][col] = matrix[row][col] +
                               min(dp[row - 1][max(0, col - 1)],
                                   min(dp[row - 1][col],
                                       dp[row - 1][min(n - 1, col + 1)]));
            }
        }

        // Find the minimum sum in the last row
        int result = INT_MAX;
        for (int col = 0; col < n; ++col) {
            result = min(result, dp[n - 1][col]);
        }

        // Return the minimum falling path sum
        return result;
    }
};
