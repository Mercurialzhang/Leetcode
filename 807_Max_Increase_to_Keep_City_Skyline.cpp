class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> maxTop;
        vector<int> maxLeft;
        int res = 0;
        for (int i = 0; i < grid[0].size(); i ++) {
            int temp = 0;
            for (int j = 0; j < grid.size(); j ++) {
                if (grid[j][i] > temp) {
                    temp = grid[j][i];
                }
            }
            maxTop.push_back(temp);
        }
        for (int i = 0; i < grid.size(); i ++) {
            maxLeft.push_back(*max_element(grid[i].begin(), grid[i].end()));
        }
        for (int i = 0; i < maxLeft.size(); i ++) {
            for (int j = 0; j < maxTop.size(); j ++) {
                res += ((maxLeft[i] < maxTop[j] ? maxLeft[i] : maxTop[j]) - grid[i][j]);
            }
        }
        return res;
    }
};
