class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, m = nums[0];

        for(int i = 0; i < n; i++){
            m = max(m, nums[i]);
        }
        for(int i = 0; i < n; i++){
            ans += m - nums[i];
        }
        return ans;
    }
};