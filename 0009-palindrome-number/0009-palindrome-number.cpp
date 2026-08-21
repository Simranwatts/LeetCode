class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int c = x;
        int rev = 0;
        int a;
        while(x != 0){
            if(rev < INT_MAX/10){
                a = x % 10;
                rev = (rev * 10) + a;
            }
                x /= 10;
        }
        if(c == rev) return true;
        else return false;
    }
};
