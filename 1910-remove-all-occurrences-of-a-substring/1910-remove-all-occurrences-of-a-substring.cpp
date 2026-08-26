class Solution {
public:
    string removeOccurrences(string s, string part) {
        int p = part.length();
        int n = s.length();
        int st = 0;

        while((st + p) <= n){
            string sub = s.substr(st, p);
            if(sub == part){
                s.erase(st, p);
                st = 0;
                n = s.length();
            } else st++;
        }
        return s;
    }
};