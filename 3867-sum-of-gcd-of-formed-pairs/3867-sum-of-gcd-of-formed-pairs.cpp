class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(nums.size(),0);

        int maxi = 0;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            prefixGcd[i] = gcd(maxi,nums[i]);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        long long sum = 0;

        for (int i = 0; i < n/2; ++i) {
            sum += gcd(prefixGcd[i], prefixGcd[n - 1 - i]);
        }
        return sum;
    }
};