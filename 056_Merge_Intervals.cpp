class Solution {
public:
    static bool compare(vector<int> a, vector<int> b) {
        return b[0] > a[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);
        for (int i = 0; i < (int)intervals.size() - 1; i ++) {
            if (intervals[i][1] >= intervals[i + 1][0]) {
                intervals[i][1] = max(intervals[i][1], intervals[i + 1][1]);
                intervals.erase(intervals.begin() + i + 1);
                i --;
            }
        }
        return intervals;
    }
};