class Solution {
private:
    bool checkValid(vector<string> &in, int i, int j) {
        for (int idx = 0; idx < i; idx ++) {
            if (in[idx][j] == 'Q') {
                return false;
            }
            if (in[idx][j + i - idx] == 'Q' and j + i - idx >= 0 and j + i - idx <= in.size() - 1) {
                return false;
            }
            if (in[idx][j - i + idx] == 'Q' and j - i + idx >= 0 and j - i + idx <= in.size() - 1) {
                return false;
            }
        }
        return true;
    }

    void solve(vector<string> &in, int &out, int n) {
        if (n >= in.size()) {
            out ++;
            return;
        }
        for (int i = 0; i < in.size(); i ++) {
            if (checkValid(in, n, i)) {
                in[n][i] = 'Q';
                solve(in, out, n + 1);
                in[n][i] = '.';
            }
        }
    }

public:
    int totalNQueens(int n) {
        int ans = 0;
        vector<string> in;
        for (int i = 0; i < n; i ++) {
            string temp(n, '.');
            in.emplace_back(temp);
        }
        solve(in, ans, 0);
        return ans;
    }
};