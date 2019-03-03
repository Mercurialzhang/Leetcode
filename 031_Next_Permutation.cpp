class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 1 || nums.size() == 0) {
            return;
        }
        int i;
        for (i = int(nums.size()) - 1; i > 0; i --) {
            if(nums[i] > nums[i - 1]) {
                break;
            }
        }
        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int j = int(nums.size()) -1; j >= i; j --) {
            if(nums[j] > nums[i - 1]) {
                swap(nums[j], nums[i - 1]);
                break;
            }
        }
        reverse(nums.begin() + i, nums.end());
    }
};