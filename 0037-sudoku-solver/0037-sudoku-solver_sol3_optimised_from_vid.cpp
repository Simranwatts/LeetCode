class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char num){
        //Horizontal
        for(int j = 0; j < 9; j++){
            if(board[row][j] == num) return false;
        }

        //Vertical
        for(int i = 0; i < 9; i++){
            if(board[i][col] == num) return false;
        }

        //Grid - Optimised
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == num) return false;
            }
        }
        return true;
    }

    bool Sudoku(vector<vector<char>>& board, int row, int col) {
        if (row == 9) return true;
        
        int nextRow = row, nextCol = col+1;
        if(nextCol == 9){
            nextRow = row+1;
            nextCol = 0;
        }

        if (board[row][col] != '.') { 
            return Sudoku(board, nextRow, nextCol);
        }

        for (char num = '1'; num <= '9'; num++) {
            if (isSafe(board, row, col, num)) {
                board[row][col] = num;
                if(Sudoku(board, nextRow, nextCol)) return true;
                board[row][col] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        Sudoku(board, 0, 0);
    }
};