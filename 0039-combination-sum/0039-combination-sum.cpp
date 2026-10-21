class Solution {
public:
    set<vector<int>> s;

    void combSum(vector<int>& candidates, int i, vector<int>& comb, vector<vector<int>>& ans, int tar){
        int n = candidates.size();
        if(i == n || tar < 0) return;

        if(tar == 0){
            if(s.find(comb) == s.end()){
            ans.push_back({comb});
            s.insert(comb);
            }
            return;
        }

        comb.push_back(candidates[i]);
        combSum(candidates, i+1, comb, ans, tar-candidates[i]); //single
        combSum(candidates, i, comb, ans, tar-candidates[i]); //multiple

        comb.pop_back();
        combSum(candidates, i+1, comb, ans, tar); //exclusion
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        vector<vector<int>> ans;

        combSum(candidates, 0, comb, ans, target);
        return ans;
    }
};