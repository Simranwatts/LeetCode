class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        vector<int> v;

        v.push_back(nums[0]);

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                v.push_back(nums[i]);
            }
        }

        int n1 = v.size();
        for(int i = 1; i < n1 - 1; i++){
            if(v[i - 1] > v[i] && v[i] < v[i + 1]){
                c++;
            }
            if(v[i - 1] < v[i] && v[i] > v[i + 1]){
                c++;
            } 
        }
        return c;
    }
};