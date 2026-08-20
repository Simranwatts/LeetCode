class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> r;
        int n = s.size();
        int i;
        for(i = n-1; i >= 0; i--){
            r.push_back(s[i]);
        }
        s.clear();
        s = r; 
    }
};