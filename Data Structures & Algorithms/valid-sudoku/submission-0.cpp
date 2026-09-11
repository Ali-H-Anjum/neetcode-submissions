class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int n = board.size();

        vector<vector<bool>> row_check(n, vector<bool>(n, false));
        vector<vector<bool>> col_check(n, vector<bool>(n, false));
        vector<vector<bool>> box_check(n, vector<bool>(n, false));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == '.') {
                    continue;
                }

                const int digit = board[i][j] - '1';
                const int box_idx = (i / 3) * 3 + (j / 3);

                if (row_check[i][digit] || col_check[j][digit] || box_check[box_idx][digit]) {
                    return false;
                }

                row_check[i][digit] = true;
                col_check[j][digit] = true;
                box_check[box_idx][digit] = true;
            }
        }
        return true;
    }
};
