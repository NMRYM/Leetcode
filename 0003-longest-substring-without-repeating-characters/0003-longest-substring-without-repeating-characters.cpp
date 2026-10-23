class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128,0);

        int n = s.length(),l=0,maxc =0;

        for(int i = 0 ; i < n ;i++){
            freq[s[i]]++;
            while(freq[s[i] ]>1){
                freq[s[l]]--;
                l++;
                
            }

            maxc = max(maxc, i-l+1);
        }
        return maxc;
    }
};