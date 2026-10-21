class Solution {
public:
    bool isPalin(string s){
        string s1 = s;
        reverse(s.begin(), s.end());
        return s == s1;
        
    }

    void getAllParts(string s, vector<string>& part, vector<vector<string>>& ans){
        if(s == ""){
            ans.push_back(part);
            return;
        }

        for(int i = 0; i < s.size(); i++){
            string left = s.substr(0, i+1);
            if(isPalin(left)){
                part.push_back(left);
                getAllParts(s.substr(i+1), part, ans);
                part.pop_back(); //backtracking
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> part;

        getAllParts(s, part, ans); 
        
        return ans;
    }
};