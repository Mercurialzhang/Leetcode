class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp (m + 1, vector<int> (n + 1));
        for (int idx = 1; idx <= m; idx ++) {
            dp[idx][1] = 1;
        }
        for (int idx = 1; idx <= n; idx ++) {
            dp[1][idx] = 1;
        }
        for (int i = 2; i <= m; i ++) {
            for (int j = 2; j <= n; j ++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m][n];
    }
};