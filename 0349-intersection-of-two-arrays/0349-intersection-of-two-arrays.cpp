class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
        set<int> s;


        for(int val1 : nums1){
            for(int val2 : nums2){
                if(val1 == val2){
                    ans.push_back(val1);
                    break;
                }
            }
        }

        for(int val : ans){
            s.insert(val);
        }

        ans.clear();
        for(int val : s){
            ans.push_back(val);
        }

        return ans;
    }
};