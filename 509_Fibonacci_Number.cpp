class Solution {
public:
    vector<vector<int>> matrixMul(vector<vector<int>> a, vector<vector<int>> b) {
        vector<vector<int>> res;
        int size = int(a.size());
        for (int i = 0; i < size; i ++) {
            res.emplace_back(vector<int> ());
            for (int j = 0; j < size; j ++) {
                int ans = 0;
                for (int k = 0; k < size; k ++) {
                    ans += (a[i][k] * b[k][j]);
                }
                res[i].emplace_back(ans);
            }
        }
        return res;
    }

    vector<vector<int>> solve(int N) {
        if (N == 1) {
            return vector<vector<int>> {{1,1}, {1,0}};
        } else {
            return matrixMul(solve(N >> 1), solve(N - (N >> 1)));
        }
    }

    int fib(int N) {
        if (N == 0) {
            return 0;
        } else if (N == 1) {
            return 1;
        }
        return solve(N - 1)[0][0];
    }
};