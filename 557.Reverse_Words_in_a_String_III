class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.length(); i ++) {
            if(s[i] != ' ') {
                end  = i;
            } else {
                for(int j = end; j >= start; j --) {
                    result.push_back(s[j]);
                }
                result.push_back(' ');
                start = end + 2;
            }
        }
        for(int j = end; j >= start; j --) {
            result.push_back(s[j]);
        }
        return result;
    }
};
