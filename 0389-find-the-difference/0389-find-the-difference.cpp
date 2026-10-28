class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        char ch;
        for(int i = 0, j = 0; i < s.size() || j < t.size(); i++, j++){
            if(s[i] != t[j]){
                ch = t[j];
                break;
            }
        }
        return ch;
    }
};