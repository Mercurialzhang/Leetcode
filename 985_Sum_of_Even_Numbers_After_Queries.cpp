class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> res;
        int temp = 0;
        for (auto a : A) {
            if (!(a & 1)) {
                temp += a;
            }
        }
        for (auto query : queries) {
            if (!(A[query[1]] & 1)) {
                temp -= A[query[1]];
            }
            A[query[1]] += query[0];
            if (!(A[query[1]] & 1)) {
                temp += A[query[1]];
            }
            res.push_back(temp);
        }
        return res;
    }
};