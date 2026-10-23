class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> f1(128,0);
        vector<int> f2(128, 0);
        for(char c : t){
            f1[c]++;
        }

        int required = 0;
        for (int i = 0; i < 128; i++) {
            if (f1[i] > 0) required++;
        }

        int formed = 0;
        int l = 0, min_len = INT_MAX, start_idx = 0;
        for(int i = 0 ;i < s.length() ; i++){
            f2[s[i]]++;

            if (f1[s[i]] > 0 && f2[s[i]] == f1[s[i]]) {
                formed++;
            }

            while (l <= i && formed == required) {
                
                if (i - l + 1 < min_len) {
                    min_len = i - l + 1;
                    start_idx = l;
                }

                
                char left_char = s[l];
                f2[left_char]--;
                if (f1[left_char] > 0 && f2[left_char] < f1[left_char]) {
                    formed--;
                }
                l++;
            }
        }

        return min_len == INT_MAX ? "" : s.substr(start_idx, min_len);
    }
};