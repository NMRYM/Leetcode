class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int n = s.length(),l=0,maxc =0;

        for(int i = 0 ; i < n ;i++){
            while(st.count(s[i])){
                st.erase(s[l]);
                l++;
                
            }
            st.insert(s[i]);
            maxc = max(maxc, i-l+1);
        }
        return maxc;
    }
};