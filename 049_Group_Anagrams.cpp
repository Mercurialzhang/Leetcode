class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> Map;
        for (auto &ele : strs) {
            string temp = ele;
            sort(temp.begin(), temp.end());
            Map[temp].emplace_back(ele);
        }
        for (auto &kv : Map) {
            res.emplace_back(kv.second);
        }
        return res;
    }
};