class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);

        for(int i = 0; i < n; i++){
            int j = (i+k) % n;
            temp[j] = nums[i];
        }
        nums.clear();
        nums.insert(nums.end(), temp.begin(), temp.end());
    }
};