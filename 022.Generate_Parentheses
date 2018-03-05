class Solution {
public:
    void helper (vector<string> &result, string s, int l, int r, int n) {
        if (r == n) {
            result.push_back(s);
        } else if (l == n){
            s += ')';
            helper(result, s, l, r + 1, n);
        } else {
            if (l > r) {
                helper(result, s + ')', l, r + 1, n);
            }
            helper(result, s + '(', l + 1, r, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string s;
        helper(result, s, 0, 0, n);
        return result;
    }
};
