class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector<int> ans (length, 1);
        int temp = 1;
        for (int i = 1; i < length; i ++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        for (int i = length - 1; i >= 0; i --) {
            ans[i] *= temp;
            temp *= nums[i];
        }
        return ans;
    }
};