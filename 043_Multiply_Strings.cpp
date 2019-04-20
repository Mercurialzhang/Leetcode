class Solution {
public:
    string multiply(string num1, string num2) {
        string ans;
        int size1 = num1.length();
        int size2 = num2.length();
        vector<int> res (size1 + size2, 0);
        for (int i = 0; i < size1; i ++) {
            for (int j = 0; j < size2; j ++) {
                int integer1 = num1[size1 - i - 1] - '0';
                int integer2 = num2[size2 - j - 1] - '0';
                int mul = integer1 * integer2;
                int ten = mul / 10;
                int one = mul % 10;
                res[i + j] += one;
                res[i + j + 1] += ten;
            }
        }
        int pointer = 0;
        while (pointer <= (size1 + size2 - 2)) {
            if (res[pointer] >= 10) {
                res[pointer + 1] += res[pointer] / 10;
                res[pointer] %= 10;
            }
            pointer ++;
        }
        bool temp = true;
        for (int i = (size1 + size2 - 1); i >= 0; i --) {
            if (res[i] == 0 &&  temp) {
                continue;
            }
            temp = false;
            ans.append(1, res[i] + '0');
        }
        if (ans.length() == 0) {
            return "0";
        }
        return ans;
    }

};