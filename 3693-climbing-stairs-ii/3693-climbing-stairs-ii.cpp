class Solution {
public:
    int f(vector<int>& costs, vector<long long> &dp, int i){
        if(i==0)return 0;
        if(i<0){
            return 2e18;
        }

        if(dp[i]!= -1){
            return dp[i];

        }
        long long ans= 2e18;

        for (int prev = max(0, i - 3); prev < i; ++prev) {
            long long jumpCost = costs[i - 1] + (long long)(i - prev) * (i - prev);
            ans = min(ans, f(costs, dp, prev) + jumpCost);
        }

        return dp[i] = ans;
    }
    int climbStairs(int n, vector<int>& costs) {
        vector<long long> dp(n+1,-1);
        dp[0]=0;
        return f(costs,dp,n);
    }
};