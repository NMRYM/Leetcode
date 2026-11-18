class Solution {
public:
    int minChanges(string s) {
       int c =0;

       int n = s.length();
       for(int i =0 ; i < n ;i+=2){
            if(s[i]!=s[i+1]){
                c++;
            }
       } 
       return c;
    }
};