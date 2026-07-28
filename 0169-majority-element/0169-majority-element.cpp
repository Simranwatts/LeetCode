class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = n/2;
        int ans;
        set<int> s;

        for(int val: nums)
            s.insert(val);
        
        for(int val: s){
            int c = count(nums.begin(), nums.end(), val);
            if(c > k){
                ans = val;
            }
        }
        return ans;
    }
};