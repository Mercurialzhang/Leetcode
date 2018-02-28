class Solution {
public:
    bool isMatch(string s, string p) {
        if (s.length() == 0){
        if (p.length() & 1) return false;
        else {
            for (int i = 1; i < p.length(); i += 2) {
                if (p[i] != '*') return false;
            }
        }
        return true;
    }
    if (p.length() == 0) return false;
    if (p.length() > 1 && p[1] == '*') {
        if (p[0] == '.' || s[0] == p[0]) {
            return isMatch(s.substr(1), p) || isMatch(s, p.substr(2));
        } else return isMatch(s, p.substr(2));
    } else {
        if (p[0] == '.' || s[0] == p[0]) {
            return isMatch(s.substr(1), p.substr(1));
        } else return false;
    }
    }
};
