class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n = nums.size();
    int r = 0, w = 0, b = 0;

    //O(n)
    for(int i = 0; i < n; i++){
        if(nums[i] == 0) r++;
        else if(nums[i] == 1) w++;
        else b++;
    }
    
    //O(n)
    int idx = 0;
    for(int i = 0; i < r; i++){
        nums[idx++] = 0;
    }
    for(int i = 0; i < w; i++){
        nums[idx++] = 1;
    }
    for(int i = 0; i < b; i++){
        nums[idx++] = 2;
    }
    }
};