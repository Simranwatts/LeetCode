class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int sq = n * n;

        vector<int> arr;
        for(int i = 0; i < sq; i++)
        arr.push_back(0);

        for(int i = 0; i < n; i++){
            for(int val : grid[i]){
                arr[val - 1] += 1;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            int p = i;
            if(arr[i] == 2)
                ans.push_back(p+1);
        }

        for(int i = 0; i < arr.size(); i++){
            int p = i;
            if(arr[i] == 0)
                ans.push_back(p+1);
        }

        return ans;
    }
};