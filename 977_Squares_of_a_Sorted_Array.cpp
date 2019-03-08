class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>::iterator it = A.begin();
        while (it != A.end()) {
            *it = pow(*it, 2);
            it ++;
        }
        sort(A.begin(), A.end());
        return A;
    }
};