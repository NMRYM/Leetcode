class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> maxi(nums.size(),0), mini(nums.size(),0);
        int maxx=0,minn = INT_MAX;

        for(int i =0 ; i < nums.size() ;i++){
            if(nums[i] > maxx){
                maxx= nums[i];
            }

            if(nums[nums.size()-i-1] < minn){
                minn= nums[nums.size() - i -1];
            }

            maxi[i] = maxx;
            mini[nums.size() - i -1]=minn;
        }

        for(int i = 0 ; i < nums.size() ; i++ ){
            if(maxi[i] - mini[i] <=k){
                return i;
            }
        }
        return -1;



    }
};