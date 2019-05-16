class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = 0;
        while (true) {
            if (2 * n == matrix.size() or 2 * n == matrix[0].size()) break;
            if (2 * n == matrix.size() - 1) {
                for (int i = n; i < matrix[0].size() - n; i ++) {
                    ans.emplace_back(matrix[n][i]);
                }
                break;
            }
            if (2 * n == matrix[0].size() - 1) {
                for (int i = n; i < matrix.size() - n; i ++) {
                    ans.emplace_back(matrix[i][n]);
                }
                break;
            }
            for (int i = n; i < matrix[0].size() - n - 1; i ++) {
                ans.emplace_back(matrix[n][i]);
            }
            for (int i = n; i < matrix.size() -n - 1; i ++) {
                ans.emplace_back(matrix[i][matrix[0].size() - n - 1]);
            }
            for (int i = matrix[0].size() - n - 1; i > n; i --) {
                ans.emplace_back(matrix[matrix.size() - n - 1][i]);
            }
            for (int i = matrix.size() - n - 1; i > n; i --) {
                ans.emplace_back(matrix[i][n]);
            }
            n ++;
        }
        return ans;
    }
};