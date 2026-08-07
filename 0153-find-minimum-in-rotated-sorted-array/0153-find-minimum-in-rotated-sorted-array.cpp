class Solution {
public:
int findMin(vector<int>& nums){
int s = 0;
int n = nums.size();
int e = n - 1;

    int mid = s + (e - s) / 2;
    if(nums[0] >= nums[n-1]){
        while(s < e){
        if(nums[0] <= nums[mid])
        s = mid + 1;

        else
        e = mid;

        mid = s + (e - s) / 2;
        }
    return nums[s];       
    }
    else return nums[0];
}
};