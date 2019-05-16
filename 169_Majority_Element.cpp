class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = 0;
        int cout = 0;
        for (auto &ele : nums) {
            if (cout == 0) {
                temp = ele;
                cout ++;
                continue;
            }
            if (ele == temp) {
                cout ++;
            } else {
                cout --;
            }

        }
        return temp;
    }
};