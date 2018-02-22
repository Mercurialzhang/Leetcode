class Solution {
public:
    int myAtoi(string str) {
    long result = 0;
    int minus = 1;
    int temp = 0;
    for(int i = str.find_first_not_of(' '); i < str.length(); i ++) {
        if((str[i] == '+' || str[i] == '-') && temp == 0) {
            minus = (str[i] == '-')? -1 : 1;
            temp = 1;
        } else if (str[i] <= '9' && str[i] >= '0') {
            result = result * 10 + str[i] - '0';
            if (minus * result >= INT32_MAX) {
                return INT32_MAX;
            }
            if (minus * result <= INT32_MIN) {
                return INT32_MIN;
            }
        } else {
            break;
        }
    }
    return minus * result;
}
};
