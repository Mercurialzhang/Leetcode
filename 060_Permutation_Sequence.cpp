class Solution {
public:
    string getPermutation(int n, int k) {
        string ans = "";

        unordered_map<int, int> fac;
        vector<char> number;

        fac[0] = 1;
        for (int i = 1; i <= n; i ++) {
            number.push_back('0' + i);
            fac[i] = i * fac[i - 1];
        }

        for (int idx = n; idx >= 1; idx --) {
            ans.insert(ans.end(), 1, number[(k - 1) / fac[idx - 1]]);
            number.erase(number.begin() + (k - 1) / fac[idx - 1]);
            k -= ((k - 1) / fac[idx - 1] * fac[idx - 1]);
        }
        return ans;
    }
};