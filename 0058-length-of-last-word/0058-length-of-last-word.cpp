class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        reverse(s.begin(), s.end());

        int count = 0;
        int i = 0;
        
        while(!isalnum(s[i])){
            if(i == n)  break;
            i++;
        }
        int j = i;

        while(s[i] != ' '){
            if(i == n)  break;
            i++;
        }
        return i - j;
    }
};