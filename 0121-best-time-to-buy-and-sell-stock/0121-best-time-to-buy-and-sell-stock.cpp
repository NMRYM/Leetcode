class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        if (n <= 1) return 0;
        vector<int> profit(n-1,0);

        for(int i = 0; i < n-1 ; i++){

            profit[i] = -1 *(prices[i] - prices[i+1]);

        }

        int sum = 0, maxsum = -1;

        for(int i  = 0 ; i < n-1 ; i++){
             sum += profit[i];
             maxsum = max(maxsum, sum);

             if(sum < 0){
                sum = 0;
             }
        }

        if(maxsum == -1){
            return 0;
        }else{
            return maxsum;
        }
    }
};