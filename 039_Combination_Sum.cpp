class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        for (int i = 0; i < candidates.size(); i ++) {
            if (candidates[i] < target) {
                vector<int> temp (candidates.begin() + i, candidates.end());
                vector<vector<int>> ans = combinationSum(temp, target - candidates[i]);
                for (auto& element : ans) {
                    element.insert(element.begin(), candidates[i]);
                }
                res.insert(res.end(), ans.begin(), ans.end());
            } else if (candidates[i] == target) {
                vector<int> temp = {target};
                res.push_back(temp);
            } else {
                break;
            }
        }
        return res;
    }
};