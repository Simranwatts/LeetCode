class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int row, int col, int p){
        int n = grid.size();
        int sq = n*n;

        if(p == sq) return true;

        //8 positions
        if((row-2 >= 0) && (col-1 >= 0) && grid[row-2][col-1] == p) return isValid(grid, row-2, col-1, p+1);
        if((row-1 >= 0) && (col-2 >= 0) && grid[row-1][col-2] == p) return isValid(grid, row-1, col-2, p+1);
        if((row-2 >= 0) && (col+1 < n) && grid[row-2][col+1] == p) return isValid(grid, row-2, col+1, p+1);
        if((row-1 >= 0) && (col+2 < n) && grid[row-1][col+2] == p) return isValid(grid, row-1, col+2, p+1);
        if((row+2 < n) && (col-1 >= 0) && grid[row+2][col-1] == p) return isValid(grid, row+2, col-1, p+1);
        if((row+1 < n) && (col-2 >= 0) && grid[row+1][col-2] == p) return isValid(grid, row+1, col-2, p+1);
        if((row+2 < n) && (col+1 < n) && grid[row+2][col+1] == p) return isValid(grid, row+2, col+1, p+1);
        if((row+1 < n) && (col+2 < n) && grid[row+1][col+2] == p) return isValid(grid, row+1, col+2, p+1);
        return false;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        if(grid[0][0] != 0) return false;
        return isValid(grid, 0, 0, 1);
    }
};