class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int pointer = 1;
        while(n >= 2) {
            int index = (ans.size() - n) / 2;
            for (int i = index; i < ans.size() - index - 1; i ++) {
                ans[index][i] = pointer++;
            }
            for (int i = index; i < ans.size() - index - 1; i ++) {
                ans[i][ans.size() - index - 1] = pointer++;
            }
            for (int i = ans.size() - index - 1; i > index ; i --) {
                ans[ans.size() - index - 1][i] = pointer++;
            }
            for (int i = ans.size() - index - 1; i > index ; i --) {
                ans[i][index] = pointer++;
            }
            n -= 2;
        }
        if (n == 1) {
            ans[ans.size() / 2][ans.size() / 2] = pointer;
        }
        return ans;
    }
};