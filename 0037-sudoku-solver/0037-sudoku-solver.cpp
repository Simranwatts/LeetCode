class Solution {
public:
    bool isSafe(vector<vector<char>>& ans, int row, int col, char num){
        //Horizontal
        for(int j = 0; j < 9; j++){
            if(ans[row][j] == num) return false;
        }

        //Vertical
        for(int i = 0; i < 9; i++){
            if(ans[i][col] == num) return false;
        }

        //Grid - Optimised
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (ans[i][j] == num) return false;
            }
        }
        return true;
    }

    void Sudoku(vector<vector<char>>& board, vector<vector<char>>& ans, int row, int col) {
        if (row == 9) {
            board = ans;
            return;
        }

        if (col == 9) {
            Sudoku(board, ans, row + 1, 0);
            return;
        }

        if (ans[row][col] != '.') {
            Sudoku(board, ans, row, col + 1);
            return;
        }

        for (char num = '1'; num <= '9'; num++) {
            if (isSafe(ans, row, col, num)) {
                ans[row][col] = num;

                Sudoku(board, ans, row, col + 1);

                ans[row][col] = '.';
            }
        }
    }

    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<char>> ans = board;
        Sudoku(board, ans, 0, 0);
    }
};