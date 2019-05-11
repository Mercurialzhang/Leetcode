class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int temp = 0;
        for (auto &ele : nums) {
            temp += ele;
            res = max(res, temp);
            if (temp <= 0) {
                temp = 0;
            }
        }
        return res;
    }
};