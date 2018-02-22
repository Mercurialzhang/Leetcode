class Solution {
public:
    int reverse(int x) {
    int minus = 0;
    long result = 0;
    vector<int> number;
    if(x > INT32_MAX  || x < INT32_MIN  || x == 0) {
        return 0;
    } else {
        if(x < 0) {
            minus = 1;
            x = -1 * x;
        }
        while (x > 0) {
            number.push_back(x % 10);
            x = x / 10;
        }
        for (int i = 0; i < number.size(); i ++){
            result = result * 10 + number[i];
        }
        if (minus == 1) {
            result = -1 * result;
        }
        if(result > INT32_MAX || result < INT32_MIN ) {
            return 0;
        }
        return  (int)result;
    }
}

};
