class Solution {
public:
    string removeOccurrences(string s, string part) {
        int p = part.length();
        int st = 0;

        while((st + p) <= s.length()){
            string sub = s.substr(st, p);
            if(sub == part){
                s.erase(st, p);
                st = 0;
            } else st++;
        }
        return s;
    }
};