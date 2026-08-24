class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set <int> s;
        vector<int> v;
        set<int> c;

        for(int val : arr){
            s.insert(val);
        }

        for(int val : s){
            int c = count(arr.begin(), arr.end(), val);
            v.push_back(c);
        }

        for(int val : v){
            c.insert(val);
        }
        return c.size() == v.size();

    }
};