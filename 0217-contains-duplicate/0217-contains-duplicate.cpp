class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int val : nums){
            s.insert(val);
        }
        return s.size() != nums.size();
    }
};