class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        vector<int> PrefixSum(n, 0);
        PrefixSum[0] = nums[0];

        for(int i = 1; i < n; i++){
            PrefixSum[i] = PrefixSum[i - 1] + nums[i];
        }

        unordered_map<int, int> m;
        for(int j = 0; j < n; j++){
            if(PrefixSum[j] == k) count++;
            int val = PrefixSum[j] - k;

            if(m.find(val) != m.end()) count += m[val];

            if(m.find(PrefixSum[j]) == m.end()) m[PrefixSum[j]] = 0;
            m[PrefixSum[j]]++;
        }
        return count;
    }
};