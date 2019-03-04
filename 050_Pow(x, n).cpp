class Solution {
private:
    double recursivePow(double x, int n) {
        if (n == 0) return 1;
        if (n == 1) return x;
        double res = recursivePow(x * x, n >> 1);
        if (n % 2 == 1) {
            res *= x;
        }
        return res;
    }
public:
    double myPow(double x, int n) {
        double res = 1;
        if (x == 0) return 0;
        if (x == 1) return res;
        if (n == INT_MIN) {
            n ++;
            res /= x;
        }
        if (n < 0) {
            n = -n;
            x = 1/x;
        }
        res *= recursivePow(x, n);
        return res;
    }
};