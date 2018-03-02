class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i ++) {
            int front = i + 1;
            int back = nums.size() - 1;
            while (back > front) {
                if (abs(nums[i] + nums[front] + nums[back] - target) < abs(result - target)) {
                    result = nums[i] + nums[front] + nums[back];
                }
                if(nums[back] + nums[front] + nums[i] > target) {
                    back --;
                } else if (nums[back] + nums[front] + nums[i] < target) {
                    front ++;
                } else {
                    return target;
                }
            }
        }
        return result;
    }
};
