class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int result = 0;
        int temp = -1000000;
        sort(candies.begin(),candies.end());
        for(int i = 0; i < candies.size(); i ++) {
            if(candies[i] != temp) {
                temp = candies[i];
                result ++;
            }
        }
        if(result >= candies.size() / 2){
            return candies.size() / 2;
        } else {
            return result;
        }
    }
};
