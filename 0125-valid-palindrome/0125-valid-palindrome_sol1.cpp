class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1)
            return 1;

        vector<char> c;
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])) c.push_back(tolower(s[i]));
        }

        int st = 0;
        int e = c.size() - 1;
        while(st < e){
            if(c[st] == c[e]){
                st++;
                e--;
            } else return 0; 
        }
        return 1;
    }
};