class Solution {
public:
    vector<vector<int>> solve(vector<int> nums) {
        vector<vector<int>> ans;
        if (nums.size() == 1) {
            ans.emplace_back(vector<int> {*nums.begin()});
            return ans;
        }
        for (int i = 0; i < nums.size(); i ++) {
            vector<int> nums_bk = nums;
            if (i >= 1 && nums[i] == nums[i - 1]) {
                continue;
            }
            nums_bk.erase(nums_bk.begin() + i);
            vector<vector<int>> temp = solve(nums_bk);
            for (auto &ele : temp) {
                ele.emplace_back(nums[i]);
            }
            ans.insert(ans.end(), temp.begin(), temp.end());
        }
        return ans;
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return solve(nums);
    }
};