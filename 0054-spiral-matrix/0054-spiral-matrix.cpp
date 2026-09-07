class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();
        int srow = 0, erow = m-1;
        int scol = 0, ecol = n-1;

        while(srow <= erow && scol <= ecol){
            for(int j = scol; j <= ecol; j++){
                //TOP
                ans.push_back(mat[srow][j]);
            }
            for(int i = srow+1; i <= erow; i++){
                //RIGHT
                ans.push_back(mat[i][ecol]);
            }
            for(int j = ecol-1; j >= scol; j--){
                //BOTTOM
                if(srow == erow) break;
                ans.push_back(mat[erow][j]);
            }
            for(int i = erow-1; i >= srow+1; i--){
                //LEFT
                if(scol == ecol) break;
                ans.push_back(mat[i][scol]);
            }
            scol++;    ecol--;
            srow++;    erow--;
        }
        return ans;
    }
};