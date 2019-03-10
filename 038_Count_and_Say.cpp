class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        } else {
            string res = countAndSay(n - 1);
            string ans = "";
            char temp = res[0];
            int count = 1;
            for (int i = 1; i < res.length(); i ++) {
                if (res[i] != temp) {
                    ans.append(1, '0' + count);
                    ans.append(1, temp);
                    temp = res[i];
                    count = 1;
                } else {
                    count ++;
                }
            }
            ans.append(1, '0' + count);
            ans.append(1, temp);
            return ans;
        }
    }
};