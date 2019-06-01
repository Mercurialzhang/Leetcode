class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int pointer = s.length() - 1;
        while (pointer >= 0) {
            if (s[pointer] != ' '){
                break;
            }
            pointer --;
        }
        while (pointer >= 0) {
            if (s[pointer] != ' ') {
                res ++;
            } else {
                break;
            }
            pointer --;
        }
        return res;
    }
};