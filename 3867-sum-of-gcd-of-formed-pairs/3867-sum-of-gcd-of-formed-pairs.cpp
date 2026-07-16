class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd(nums.size(),0);

        int maxi = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            prefixGcd[i] = gcd(maxi,nums[i]);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        int low = 0, high = nums.size() -1;
        long long sum = 0;

        while(low < high){
            sum += gcd(prefixGcd[low] , prefixGcd[high]);
            low++;
            high--;
        }
        return sum;
    }
};