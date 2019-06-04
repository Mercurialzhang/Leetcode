class Solution {
public:
    vector<int> getMaxLengrh(string s, int left, int right) {
        vector<int> result;
        while(s[left] == s[right] && left >= 0 && right <= s.length()) {
            left --;
            right ++;
        }
        result.push_back(left + 1);
        result.push_back(right - 1);
    //    cout << left << " " << right << endl;
        return result;
    }


    string longestPalindrome(string s) {
        int max = 0;
        vector<int> result;
        vector<int> output;
        for (int i = 0; i < s.length(); i ++) {
            result = getMaxLengrh(s, i, i);
            if (result[1] - result[0] + 1 > max) {
                max = result[1] - result[0] + 1;
                output = result;
            }
            result = getMaxLengrh(s, i, i + 1);
            if (result[1] - result[0] + 1 > max) {
                max = result[1] - result[0] + 1;
                output = result;
            }
        }
        return s.substr(output[0], output[1] - output[0] + 1);
    }
};
