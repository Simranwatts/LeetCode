class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int c;
        int s = 0, e = n-1;
        if(arr[s] > arr[s+1]) return 0;
        if(arr[e] > arr[e-1]) return e;
        e--;
        s++;
        while(s <= e){
            int mid = s + (e-s)/2;
            if((arr[mid] > arr[mid-1]) & (arr[mid] > arr[mid+1])){
                c = mid;
                return mid;
            }
            if(arr[mid] < arr[mid+1]){
                s = mid+1;
            }
            if(arr[mid] > arr[mid+1]){
                e= mid-1;
            }
        }
        return c;
    }
};