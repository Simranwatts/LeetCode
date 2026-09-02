class Solution {
public:
    bool is_matched(int freq1[], int freq2[]){// O(1) 26 is negligible
        for(int i = 0; i < 26; i++){
            if(freq1[i] != freq2[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(char c : s1)    freq[c - 'a']++;

        int wind_size = s1.length();
        for(int i = 0; i < s2.length(); i++){ //O(n^2)
            int idx = i; 
            int wind_idx = 0;
            int wind_freq[26] = {0};

            while(idx < s2.length() && wind_idx < wind_size){
                wind_freq[s2[idx] - 'a']++;
                idx++;
                wind_idx++;
            }

            if(is_matched(freq, wind_freq)) return true;
        }
        return false;
    }
};