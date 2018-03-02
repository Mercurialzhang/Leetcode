class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        if (nums.size() < 3) {
            return result;
        } else {
            for (int i = 0; i < nums.size() - 2; i ++) {
                if (nums[i] == nums[i - 1] && i > 0) {
                    continue;
                }
                int front = i + 1;
                int back = nums.size() -1;
                while (back > front) {
                    if (nums[front] + nums[back] + nums[i] == 0) {
                        temp = {nums[i], nums[front], nums[back]};
                        result.push_back(temp);
                        front ++;
                        back --;
                    } else if (nums[front] + nums[back] + nums[i] < 0) {
                        front ++;
                    } else if (nums[front] + nums[back] + nums[i] > 0) {
                        back --;
                    }
                }
            }
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};
