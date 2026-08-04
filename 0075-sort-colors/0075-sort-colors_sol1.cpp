class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, b = 0;
        for(int val : nums){
            if(val % 2 == 0){
                if(val == 0) r++;
                else b++; 
            }
            else w++;
        }
        nums.clear();
        while(r != 0){
            nums.push_back(0);
            r--;
        }
        while(w != 0){
            nums.push_back(1);
            w--;
        }
        while(b != 0){
            nums.push_back(2);
            b--;
        }
    }
};