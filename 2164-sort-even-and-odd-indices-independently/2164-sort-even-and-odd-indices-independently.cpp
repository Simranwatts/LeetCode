class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd;
        vector<int> even;

        for(int i = 0; i < n; i += 2){
            even.push_back(nums[i]);
        }

        for(int i = 1; i < n; i += 2){
            odd.push_back(nums[i]);
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());

        int j = 0;
        for(int i = 0; i < n; i += 2){
            if(j >= even.size()) break;
            nums[i] = even[j];
            j++;  
        }

        j = 0;
        for(int i = 1; i < n; i += 2){
            if(j >= odd.size()) break;
            nums[i] = odd[j];
            j++; 
        } 
        return nums;       
    }
};