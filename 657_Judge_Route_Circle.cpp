class Solution {
public:
    bool judgeCircle(string moves) {
        int length = moves.length();
        int UD = 0;
        int RL = 0;
        for (int i = 0; i < length; i ++) {
            switch (moves[i]) {
                case 'U':
                    UD ++;
                    break;
                case 'D':
                    UD --;
                    break;
                case 'R':
                    RL ++;
                    break;
                case 'L':
                    RL --;
                    break;
                default:
                    break;
            }
        }
        if (UD == 0 && RL == 0) {
            return true;
        } else {
            return false;
        }    
    }
};
