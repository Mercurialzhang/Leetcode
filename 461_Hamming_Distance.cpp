class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;
        while(x >= 1 || y >= 1) {
            int X = x % 2;
            int Y = y % 2;
            if(X != Y) {
                res ++;
            }
            x = x / 2;
            y = y / 2;
        }
        return res;
    }
};
