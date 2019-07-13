class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int add = 0;
        while (a.length() >= 1 or b.length() >= 1) {
            int a_back = 0;
            int b_back = 0;
            if (a.length() >= 1) {
                a_back = a.back() - '0';
            }
            if (b.length() >= 1) {
                b_back = b.back() - '0';
            }
            int temp = add + a_back + b_back;
            if (temp >= 2) {
                temp -= 2;
                add = 1;
            } else {
                add = 0;
            }
            result.insert(0, 1, (char)('0' + temp));
            a = a.substr(0, a.length() - 1);
            b = b.substr(0, b.length() - 1);
        }
        if (add == 1) {
            result.insert(0, 1, '1');
        }
        return result;
    }
};