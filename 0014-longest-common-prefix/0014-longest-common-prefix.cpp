class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string last=strs[strs.size()-1];
        string first=strs[0];
        string result="";
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i])
            break;
            result+=first[i];
        }
        return result;
    }
};