class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int left = 0;
        int right = int(height.size() - 1);
        int temp = 0;
        while (right >= left) {
            if (height[left] <= temp) {
                ans += (temp - height[left]);
                left ++;
            } else if (height[right] <= temp) {
                ans += (temp - height[right]);
                right --;
            } else {
                temp = min(height[left], height[right]);
            }
        }
        return ans;
    }
};