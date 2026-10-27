class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        int ans = -1;

        for(int i = 0; i+n <= h; i++){
            string s = haystack.substr(i, n);
            if(s == needle){
                ans = i;
                break;
            }
        }
        return ans;
    }
};