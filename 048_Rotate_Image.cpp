class Solution {
public:
    void solve(vector<vector<int>>& matrix, int n) {
        int size = matrix.size();
        if (n >= (size / 2)) {
            return;
        }
        for (int i = (0 + n); (i < size - n - 1); i ++) {
            int temp = matrix[n][i];
            matrix[n][i] = matrix[size - i -1][n];
            matrix[size - i -1][n] = matrix[size - n - 1][size - i -1];
            matrix[size - n - 1][size - i -1] = matrix[i][size - n -1];
            matrix[i][size - n - 1] = temp;
        }
        solve(matrix, n + 1);
    }

    void rotate(vector<vector<int>>& matrix) {
        solve(matrix, 0);
    }
};