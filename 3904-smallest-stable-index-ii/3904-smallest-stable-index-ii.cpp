class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> maxi(nums.size(),0), mini(nums.size(),0);
        int maxx=0,minn = INT_MAX;

        for(int i =0 ; i < nums.size() ;i++){
                maxx= max(maxx,nums[i]);
                minn= min(minn,nums[nums.size() - i -1]);
            

            maxi[i] = maxx;
            mini[nums.size() - i -1]=minn;
        }

        for(int i = 0 ; i < nums.size() ; i++ ){
            int s=maxi[i] - mini[i];
            if(s <=k){
                return i;
            }
        }
        return -1;
    }
};