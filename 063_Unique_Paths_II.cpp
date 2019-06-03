class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<long>> dp (m, vector<long>(n));

        bool status = true;

        for (int i = 0; i < m; i ++) {
            if (status and obstacleGrid[i][0] == 0) {
                dp[i][0] = 1;
            } else {
                status = false;
                dp[i][0] = 0;
            }
        }

        status = true;
        for (int j = 0; j < n; j ++) {
            if (status and obstacleGrid[0][j] == 0) {
                dp[0][j] = 1;
            } else {
                status = false;
                dp [0][j] = 0;
            }
        }

        for (int i = 1; i < m; i ++) {
            for (int j = 1; j < n; j ++) {
                if (obstacleGrid[i][j] != 1) {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                } else {
                    dp[i][j] = 0;
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};