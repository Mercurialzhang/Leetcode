class Solution {
public:
    int jump(vector<int>& nums) {
        int step = 0;
        int size = nums.size();
        if (size == 1) return step;
        for (int i = 0; i < size - 1; ) {
            if (nums[i] + i >= size - 1) return ++step;
            int max = 0, temp = 0;
            for (int point = 1; point <= nums[i]; point ++) {
                if (point + nums[i + point] >= max) {
                    temp = point + i;
                    max = point + nums[i + point];
                }
            }
            i = temp;
            step ++;
        }
        return step;
    }
};