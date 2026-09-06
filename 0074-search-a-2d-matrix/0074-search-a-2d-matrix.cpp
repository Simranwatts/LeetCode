class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target, int row){
        int n = matrix[0].size();
        int s = 0;
        int e = n - 1;

        while(s <= e){
            int mid = s + (e-s)/2;

            if(target == matrix[row][mid]) return true;
            else if(target > matrix[row][mid]) s = mid+1;
            else e = mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int sr = 0; 
        int er = m - 1;

        while(sr <= er){
            int mid = sr + (er - sr)/2;
            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
                //Found the row
                return searchInRow(matrix, target, mid);
            }else if(target > matrix[mid][n-1]){
                //down => right
                sr = mid + 1;
            }else{//up => left (target < matrix[mid][0])
                er = mid - 1;
            }
        }
        return false;
    }
};