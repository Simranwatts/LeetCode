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

        //Grid
        if(row < 3){
            if(col < 3){
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
            else if(col < 6){
                for(int i = 0; i < 3; i++){
                    for(int j = 3; j < 6; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
            else{
                for(int i = 0; i < 3; i++){
                    for(int j = 6; j < 9; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
        }
        else if(row < 6){
            if(col < 3){
                for(int i = 3; i < 6; i++){
                    for(int j = 0; j < 3; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
            else if(col < 6){
                for(int i = 3; i < 6; i++){
                    for(int j = 3; j < 6; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
            else{
                for(int i = 3; i < 6; i++){
                    for(int j = 6; j < 9; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
        }
        else{
            if(col < 3){
                for(int i = 6; i < 9; i++){
                    for(int j = 0; j < 3; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
            else if(col < 6){
                for(int i = 6; i < 9; i++){
                    for(int j = 3; j < 6; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
            else{
                for(int i = 6; i < 9; i++){
                    for(int j = 6; j < 9; j++){
                        if(ans[i][j] == num) return false;
                    }
                }
            }
        }
        return true;
    }

    void Sudoku(vector<vector<char>>& board, vector<vector<char>>& ans,
                int row, int col) {
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