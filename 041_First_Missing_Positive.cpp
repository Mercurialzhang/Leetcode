class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map <int, int> numMap;
        for (auto num : nums) {
            numMap[num] += 1;
        }
        int i;
        for (i = 1; i <= int(nums.size()) + 1; i ++) {
            if(numMap[i] == 0) {
                break;
            }
        }
        return i;
    }
};