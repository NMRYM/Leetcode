class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIdx=0,maxIdx=0,mini=INT_MAX, maxi=INT_MIN;

        for(int i=0; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                maxIdx=i;
            }

            if(nums[i] < mini){
                mini = nums[i];
                minIdx=i;
            }

        }

        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);

        int option1 = right + 1;

        int option2 = nums.size() - left;

        int option3 = (left + 1) + (nums.size() - right);

        return min({option1, option2, option3});
    }
};