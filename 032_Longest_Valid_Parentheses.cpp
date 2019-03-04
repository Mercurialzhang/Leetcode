class Solution {
public:
    int longestValidParentheses(string s) {
        int res = 0;
        if (s.length() == 0) {
            return res;
        }
        vector<int> dp(s.size(), 0);
        for (int i = 1; i < s.length(); i ++) {
            if (s[i] == ')') {
                if (s[i - 1] == '(') {
                    if (i >= 2) {
                        dp[i] = dp[i - 2] + 2;
                    } else {
                        dp[i] = 2;
                    }
                } else if (s[i - 1] == ')' && (i - dp[i - 1] - 1) >= 0){
                    if(s[i - dp[i - 1] - 1] == '(') {
                        if (i - dp[i - 1] - 2 >= 0) {
                            dp[i] = dp[i - 1] + 2 + dp[i - dp[i - 1] - 2];
                        } else {
                            dp[i] = dp[i - 1] + 2;
                        }
                    }
                }
            }
        }
        res = *max_element(dp.begin(), dp.end());
        return res;
    }
};