class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 0;
        int temp;
        for (int i = 0; i < nums.size(); i ++) {
            if (i == 0) {
                res ++;
                temp = nums[i];
            } else {
                if (nums[i] == temp) {
                    ;
                } else {
                    temp = nums[i];
                    nums[res] = temp;
                    res ++;
                }
            }
        }
        return res;
    }
};
