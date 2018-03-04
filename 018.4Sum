class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        if (nums.size() < 4) {
            return result;
        } else {
            for (int i = 0; i < nums.size() - 3; i ++) {
                if (nums[i] == nums[i - 1] && i > 0) {
                    continue;
                }
                for (int j = i + 1; j < nums.size() - 2; j ++) {
                    if (nums[j] == nums[j - 1] && j > i + 1) {
                        continue;
                    }
                    int front = j + 1;
                    int back = nums.size() - 1;
                    while (back > front) {
                        if (nums[i] + nums[j] + nums[front] + nums[back] == target) {
                            temp = {nums[i], nums[j], nums[front], nums[back]};
                            result.push_back(temp);
                            front ++;
                            back --;
                        } else if (nums[i] + nums[j] + nums[front] + nums[back] > target) {
                            back --;
                        } else {
                            front ++;
                        }
                    }
                }
            }
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};
