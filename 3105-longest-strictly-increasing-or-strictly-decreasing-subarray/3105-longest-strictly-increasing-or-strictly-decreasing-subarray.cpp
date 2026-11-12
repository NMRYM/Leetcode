class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int l=0, c=0, maxc=1;
        int n = nums.size();

        for(int i =1 ; i <n; i++){
            if(nums[i] >= nums[i-1]){
                l =i;
            }
            maxc = max(maxc, i-l+1);
        }
        l=0;
        for(int i = 1 ; i <n; i++){
            if(nums[i] <= nums[i-1]){
                l =i;
            }
            maxc = max(maxc, i-l+1);
        }
        return maxc;
    }
};