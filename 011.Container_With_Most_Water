class Solution {
public:
    int maxArea(vector<int>& height) {
    int result = 0;
    int left = 0;
    int right = height.size() - 1;
    while (right > left) {
        result = max(result, (right - left) * (min(height[left], height[right])));
        if(height[left] < height[right]) {
            left ++;
        } else {
            right --;
        }
    }
    return result;
}
};
