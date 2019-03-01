class Solution {
public:
    bool isPalindrome(int x) {
    int sum = 0;
    int X = x;
    if (x < 0) {
        return false;
    } else {
        while(x > 0) {
            sum = sum * 10 + x % 10;
            x = x / 10;
        }
    }
    if (sum == X) {
        return true;
    } else {
        return false;
    }
}
};
