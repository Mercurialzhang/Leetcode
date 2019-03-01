class Solution {
public:
    int findComplement(int num) {
        int i = 0;
        while(pow(2,i) <= num) {
            i ++;
        }
        return pow(2,i) - 1 - num;
    }
};
