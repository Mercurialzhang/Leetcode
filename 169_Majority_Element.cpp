class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = 0;
        int cout = 0;
        for (auto &ele : nums) {
            if (cout == 0) {
                temp = ele;
                cout += 2;
                continue;
            }
            if (ele == temp) {
                cout += 2;
            } else {
                cout --;
            }

        }
        return temp;
    }
};