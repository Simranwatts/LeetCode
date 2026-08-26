class Solution {
public:
    string removeOccurrences(string s, string part) {
        int p = part.length();
        int st = 0;

        while(s.length() > 0 && s.find(part) < s.length()){
            s.erase(s.find(part), p);
        }
        return s;
    }
};