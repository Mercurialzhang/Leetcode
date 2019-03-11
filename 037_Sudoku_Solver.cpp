class Solution {
private:
    int box3_3[9][9] = {0};
    int box_ver[9][9] = {0};
    int box_hor[9][9] = {0};

    int find(vector<vector<char>> &board, int n) {
        if (n == 81) {
            return 1;
        }
        int i = n / 9;
        int j = n % 9;
        if (board[i][j] == '.') {
            for (int k = 0; k < 9; k++) {
                if (!(box3_3[(i / 3) * 3 + (j / 3)][k] | box_ver[j][k] | box_hor[i][k])) {
                    board[i][j] = char('1' + k);
                    box3_3[(i / 3) * 3 + (j / 3)][k] = 1;
                    box_ver[j][k] = 1;
                    box_hor[i][k] = 1;
                    n ++;
                    if (find(board, n) == 1) {
                        return 1;
                    } else {
                        n --;
                        i = n / 9;
                        j = n % 9;
                        board[i][j] = '.';
                        box3_3[(i / 3) * 3 + (j / 3)][k] = 0;
                        box_ver[j][k] = 0;
                        box_hor[i][k] = 0;
                    }
                }
            }
            return 0;
        } else {
            n ++;
            if (find(board, n) == 1) {
                return 1;
            } else {
                n --;
                return 0;
            }
        }
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i ++) {
            for (int j = 0; j < 9; j ++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    box3_3[(i / 3) * 3 + (j / 3)][num] = 1;
                    box_ver[j][num] = 1;
                    box_hor[i][num] = 1;
                }
            }
        }
        find(board, 0);
    }
};