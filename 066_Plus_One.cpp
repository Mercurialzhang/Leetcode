class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        for (i = digits.size() - 1; i >= 0; i --) {
            digits[i] += 1;
            if (digits[i] == 10) {
                digits[i] = 0;
            } else {
                break;
            }
        }
        if (i == -1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};