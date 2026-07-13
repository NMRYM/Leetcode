class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        if (n <= 1) return 0;

        int sum = 0, maxsum = 0;

        for(int i  = 0 ; i < n-1 ; i++){
             sum += (prices[i + 1] - prices[i]);;
             maxsum = max(maxsum, sum);

             if(sum < 0){
                sum = 0;
             }
        }

       
            return maxsum;
        
    }
};