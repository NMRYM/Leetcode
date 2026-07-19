class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> freq(26,0);
        string res = "";
        vector<bool> instack(26,false);
        stack<char> st;
        for(char c : s){
            freq[c - 'a']++;
            
        }

        for(char c : s){
            freq[c-'a']--;
            if(instack[c - 'a']){
                continue;
            }

            while (!res.empty() && res.back() > c && freq[res.back() - 'a'] > 0) {
                instack[res.back() - 'a'] = false;
                res.pop_back();
            }

            res.push_back(c);
            instack[c - 'a'] = true;
        }

        return res;
    }
};