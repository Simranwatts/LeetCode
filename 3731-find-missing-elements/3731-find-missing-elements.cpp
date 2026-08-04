class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int small = nums[0];
        int big = nums[n-1];
        if(small - big == (n - 1)){
            return ans;
        }
        else{
            for(int i = 0; i < n; i++){
                while(nums[i] != small){
                    ans.push_back(small);
                    small++;
                }
                small++;
            }
        }
        return ans;
    }
};