class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int box3_3[9][10] = {0};
        int box_ver[9][10] = {0};
        int box_hor[9][10] = {0};
        for (int i = 0; i < 9; i ++) {
            for (int j = 0; j < 9; j ++) {
                int num = board[i][j] - '0';
                if(board[i][j] != '.') {
                    if (box3_3[(i / 3) * 3 + (j / 3)][num]|| box_ver[j][num]|| box_hor[i][num]) {
                        return false;
                    } else {
                        box3_3[(i / 3) * 3 + (j / 3)][num] = 1;
                        box_ver[j][num] = 1;
                        box_hor[i][num] = 1;
                    }
                }
            }
        }
        return true;
    }
};