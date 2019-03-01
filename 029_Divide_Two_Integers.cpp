class Solution {
public:
    int divide(int dividend, int divisor) {
        double res = (double)dividend / (double)divisor;
        if (res > INT_MAX) {
            res = INT_MAX;
        }
        return (int)res;
    }
};
