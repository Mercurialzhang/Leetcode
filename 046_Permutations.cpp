class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        if (nums.size() == 1) {
            ans.push_back(vector<int> {nums[0]});
            return ans;
        } else {
            for (int i = 0; i < nums.size(); i ++) {
                vector<int> nums_bk = nums;
                nums_bk.erase(nums_bk.begin() + i);
                vector<vector<int>> temp = permute(nums_bk);
                for (auto& ele : temp) {
                    ele.push_back(nums[i]);
                }
                ans.insert(ans.end(), temp.begin(), temp.end());
            }
            return ans;
        }
    }
};