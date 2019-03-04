class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int res = -1;
        int left = 0;
        int right = int(nums.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                res = mid;
                right = mid - 1;

            }
        }
        ans[0] = res;
        res = -1;
        right = int(nums.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                res = mid;
                left = mid + 1;
            }
        }
        ans[1] = res;
        return ans;
    }
};