class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res = -1;
        int left = 0;
        int right = int(nums.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] >= *nums.begin()) {
                if (nums[mid] > target) {
                    if (target >= *nums.begin()) {
                        right = mid - 1;
                    } else {
                        left = mid + 1;
                    }
                } else if (nums[mid] < target) {
                    left = mid + 1;
                } else {
                    return mid;
                }
            } else {
                if (nums[mid] > target) {
                    right = mid - 1;
                } else if (nums[mid] < target) {
                    if (target >= *nums.begin()) {
                        right = mid - 1;
                    } else {
                        left = mid + 1;
                    }
                } else {
                    return mid;
                }
            }
        }
        return res;
    }
};