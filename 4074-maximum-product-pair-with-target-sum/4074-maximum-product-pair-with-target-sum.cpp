class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int prod =INT_MIN, max_prod =INT_MIN;
        int i1=-1,i2=-1;

        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = 0 ; j < nums.size() ; j++){
                if(i==j) continue;

                if(nums[i] + nums[j] == target && nums[i]!=nums[j]){
                    prod = nums[i]*nums[j];
                }

                if(prod > max_prod){
                    max_prod = prod;
                    if(nums[i] > nums[j]){
                        i1= i;
                        i2=j;
                    }else{
                        i2=i;
                        i1=j;
                    }
                }
            }
        }

        return {i1,i2};
    }
};