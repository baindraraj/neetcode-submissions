class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9), col(9), block(9);

        for(int i=0;i<9;i++) {
            for(int j =0;j<9;j++) {
                if(board[i][j]!='.') {
                    int digit = board[i][j]-'0';
                    int num = (i/3) + (3 * (j/3));
                    if(row[i].count(digit) || col[j].count(digit) || block[num].count(digit)) return false;
                    else {
                        row[i].insert(digit);
                        col[j].insert(digit);
                        block[num].insert(digit);
                    }
                }
            }
        }

        return true;
    }
};
