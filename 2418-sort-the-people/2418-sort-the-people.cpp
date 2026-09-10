class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> m;
        vector<string> ans;

        for(int i = 0; i < names.size(); i++){
            m[heights[i]] = names[i];
        }
        sort(heights.begin(), heights.end(), greater<int>());

        for(int i = 0; i < heights.size(); i++){
            ans.push_back(m[heights[i]]);
        }

        return ans;
    }
};