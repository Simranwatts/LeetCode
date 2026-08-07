class Solution {
public:
    int pivot(vector<int>& nums){
        int s = 0;
        int e = nums.size() - 1;

        int mid = s + (e - s) / 2;
        while(s < e){
        if(nums[0] <= nums[mid])
        s = mid + 1;

        else
        e = mid;

        mid = s + (e - s) / 2;
        }
    return s;
    }

    int binary_search(vector<int>& nums, int s, int e, int target){
        int mid = s + (e - s) / 2;

        while(s <= e){
        if(nums[mid] == target)
        return mid;

        else if(target > nums[mid])
        s = mid + 1;

        else
        e = mid - 1;

        mid = s + (e - s) / 2;
        }
    return -1;
    }
    int search(vector<int>& nums, int target) {
        int piv = pivot(nums);

        if(target >= nums[piv] && target <= nums[nums.size() - 1])
        return binary_search(nums, piv, nums.size() - 1, target);
        
        else
        return binary_search(nums, 0, piv - 1, target); 
    }
};