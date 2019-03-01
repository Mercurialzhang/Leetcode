class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> characters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> temp;
        vector<string> result;
        for (int i = 0; i < digits.length(); i ++) {
            temp = result;
            result.clear();
            if (i == 0) {
                temp = {""};
            }
            for (int j = 0; j < characters[(int)digits[i] - 48].length(); j ++) {
                for (int k = 0; k < temp.size(); k ++) {
                    result.push_back(temp[k] + characters[(int)digits[i] - 48][j]);
                }
            }
        }
        return result;
    }
};
