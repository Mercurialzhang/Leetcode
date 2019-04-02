class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i ++) {
            for(int j = 0; j < nums.size(); j ++) {
                if(i != j && nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;

                }
            }
        }
    }
};
