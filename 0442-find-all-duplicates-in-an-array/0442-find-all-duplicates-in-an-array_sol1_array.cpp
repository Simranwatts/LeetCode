class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int val: nums){
            if(nums[abs(val) - 1] > 0){
                nums[abs(val) - 1] *= -1;
            }
            else ans.push_back(abs(val));
        }
        return ans;
    }
};