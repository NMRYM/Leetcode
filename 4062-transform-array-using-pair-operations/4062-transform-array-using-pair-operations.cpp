class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long s1=0,s2=0;
        for(int n: source){
            s1+=n;
        }
        for(int n : target){
            s2+=n;
        }

        if(s1==s2){
            return true;
        }else{
            return false;
        }
    }
};