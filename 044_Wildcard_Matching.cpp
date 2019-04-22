class Solution {
public:
    int solve(string &s, string &p, int sp, int pp) {
        if (sp == s.size() and pp == p.size()) return 2;
        if (sp == s.size() and p[pp] != '*') return 1;
        if (pp == p.size()) return 0;
        if (p[pp] == '*') {
            if (pp + 1 < p.size() and p[pp + 1] == '*') {  // handle ***
                return solve(s, p, sp, pp + 1);
            }
            for (int i = 0; i <= s.size() - sp; i ++) {
                int ret = solve(s, p, sp + i, pp + 1);
                if (ret > 0) {
                    return ret;
                }
            }
        }
        if (s[sp] == p[pp] or p[pp] == '?') {
            return solve(s, p, sp + 1, pp + 1);
        }
        return 0;
    }

    bool isMatch(string s, string p) {
        return solve(s, p, 0, 0) == 2;
    }
};