class Solution {
public:
   string convert(string s, int numRows) {
    string result;
    if(numRows != 1) {
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= s.length() / (2 * numRows - 2); j++) {
                if ((2 * numRows - 2) * j + i < s.length()) {
                    result.push_back(s[(2 * numRows - 2) * j + i]);
                }
                if (i != 0 && i != numRows - 1) {
                    if ((2 * numRows - 2) * (j + 1) - i < s.length()) {
                        result.push_back(s[(2 * numRows - 2) * (j + 1) - i]);
                    }
                }
            }
        }
        return result;
    } else {
        return s;
    }
}
};
