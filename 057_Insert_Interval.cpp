class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int idx = 0;
        while (idx < intervals.size()) {
            if (newInterval[1] < intervals[idx][0]) {
                intervals.insert(intervals.begin() + idx, newInterval);
                return intervals;
            }
            if (newInterval[0] <= intervals[idx][1]) {
                break;
            }
            idx += 1;
        }
        if (idx == intervals.size()) {
            intervals.emplace_back(newInterval);
            return intervals;
        }
        intervals[idx][0] = min(intervals[idx][0], newInterval[0]);
        intervals[idx][1] = max(intervals[idx][1], newInterval[1]);
        int endidx = idx;
        while (endidx < intervals.size() and intervals[idx][1] >= intervals[endidx][0]) {
            intervals[idx][1] = max(intervals[idx][1], intervals[endidx][1]);
            endidx += 1;
        }
        intervals.erase(intervals.begin() + idx + 1, intervals.begin() + endidx);
        return intervals;
    }
};