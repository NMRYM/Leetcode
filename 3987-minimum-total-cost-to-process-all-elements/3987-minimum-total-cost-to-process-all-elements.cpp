class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long MOD = 1e9 + 7;
        long long count = 0, res = k;

        for(int i = 0 ; i < nums.size(); i++){
            res -= nums[i];

            if (res < 0) {
                long long needed = -res;
                long long ops = (needed + k - 1) / k; 
                count += ops;
                res += ops * k;
            }
        }
        long long ans = (count % MOD) * ((count + 1) % MOD) % MOD;
        ans = (ans * 500000004) % MOD;
        return ans;
    }
};