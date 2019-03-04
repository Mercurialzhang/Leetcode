class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = -1, left = 0, right = int(nums.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                ans = mid;
                right = mid - 1;
            }
        }
        if (ans == -1) {
            ans = max(left, right);
        }
        return ans;
    }
};