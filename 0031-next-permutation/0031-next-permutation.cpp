class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int piv = -1;
        int n = nums.size();

        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                piv = i;
                break;
            }
        }
        if(piv == -1){
            //using reverse function
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i = n - 1; i > piv; i--){
            if(nums[i] > nums[piv]){
                swap(nums[i], nums[piv]);
                break;
            }
        }
        int s = piv + 1;
        int e = n - 1;

        while(s < e){
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
};