class Solution {
public:
    int binary_search(vector<int>& nums, int target, int s, int e) {
        while(s <= e){
            int mid = s + (e - s)/2;

            if(nums[mid] == target)
            return mid;
            else if(nums[mid] > target) return binary_search(nums, target, s, mid-1);
            else return binary_search(nums, target, mid+1, e);
            }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return binary_search(nums, target, 0, nums.size() - 1);
    } 
};