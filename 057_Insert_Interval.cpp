class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        if (intervals.empty()) {
            ans.push_back(newInterval);
            return ans;
        }
        bool temp = true;
        if (newInterval[1] < intervals.front()[0]) {
            intervals.insert(intervals.begin(), newInterval);
            return intervals;
        } else if (newInterval[0] > intervals.back()[1]) {
            intervals.insert(intervals.end(), newInterval);
            return intervals;
        }
        for (int i = 0; i < intervals.size(); i ++) {
            if (i != intervals.size() - 1 and newInterval[0] > intervals[i][1] and newInterval[1] < intervals[i+1][0]) {
                ans.push_back(intervals[i]);
                ans.push_back(newInterval);
            }
            else if (newInterval[0] <= intervals[i][1] and newInterval[1] >= intervals[i][0]) {
                if (temp) {
                    intervals[i][0] = min(newInterval[0], intervals[i][0]);
                    intervals[i][1] = max(newInterval[1], intervals[i][1]);
                    ans.push_back(intervals[i]);
                    temp = false;
                } else {
                    ans.back()[1] = max(ans.back()[1], intervals[i][1]);
                }
            } else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};