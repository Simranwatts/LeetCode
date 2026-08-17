class Solution {
public:
    int addDigits(int n) {
        int sum = 0;
        while(n !=0 || sum > 9){
            int r = n % 10;
            sum += r;
            n /= 10;
            if(n == 0 && sum > 9){
                n = sum;
                sum = 0;
            }
        }
        return sum;
    }
};