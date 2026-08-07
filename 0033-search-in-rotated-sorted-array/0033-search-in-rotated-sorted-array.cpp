class Solution {
public:
    int pivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        while(s < e){
            int mid = s +(e-s)/2;
            if(nums[mid] >= nums[0]){
                s = mid + 1;
            }
            else e = mid;
        }
        return s;
    }
    int BS(vector<int>& nums, int s, int e, int target){
        while(s <= e){
            int mid = s + (e-s)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else e = mid - 1;
        } 
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int piv = pivot(nums);

        if(piv == 0)
        return BS(nums, 0, n - 1, target);

        if(target >= nums[0] && target <= nums[piv - 1]){
            return BS(nums, 0, piv - 1, target);  
        } 
        else return BS(nums, piv, n-1, target);
    }
};



