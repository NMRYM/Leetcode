class Solution {
public:
    int minMoves(vector<int>& nums) {
        int c =0;
        int maxi  = -1;
        for(int n : nums){
            maxi = max(maxi,n);
        }
        for(int n : nums){
            c+= (maxi - n);
        }
        return c;
    }
};