class Solution {
public:
    bool canJump(vector<int>& nums) {
        int point = 0;
        while (point < nums.size()) {
            if (point + nums[point] >= nums.size() - 1) return true;
            if (nums[point] == 0) return false;
            int idx = point;
            int max = -1;
            for (int i = point + 1; i <= point + nums[point]; i ++) {
                if (i + nums[i] > max) {
                    max = i + nums[i];
                    idx = i;
                }
            }
            point = idx;
        }
        return false;
    }
};