class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size() - 1;
        int area = 0;

        while(s < e){
            int b = e - s;
            int l = min(height[e], height[s]);
            area = max(l * b, area);

            height[e] > height[s] ? s++ : e--;
        }
        return area;
    }
};