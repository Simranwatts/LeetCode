class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;

        int s = 2;
        int e = x - 1;
        long long sq;
        int ans = 1;

        while(s <= e){
            int mid = s + (e - s)/2;
            sq = 1LL * mid * mid;
            //long long*int*int
            //= long long*int
            //=long long

            if(sq == x){
                return mid;
            }
            else if(sq < x){
                ans = mid;
                s = mid + 1;
            }
            else e = mid - 1;
        }
        return ans;
    }
};