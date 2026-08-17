class Solution {
public:
    int alternateDigitSum(int n) {
        int r;
        long long rev = 0;

        while(n != 0){
            r = n % 10;
            rev = (rev * 10) + r;
            n /= 10;
        }

        int sum = 0;
        int c = 0;
        while(rev != 0){
            r = rev % 10;
            if(c % 2 == 0) sum += r;
            else sum -= r;
            rev /= 10;
            c++;
        }
        return sum;
    }
};