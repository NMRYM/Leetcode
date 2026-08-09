

static const auto fast_io = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double sum = 0;

        sort(prices.begin(),  prices.end());

        sort(discounts.begin(), discounts.end());
        int j = discounts.size()-1, i = prices.size()-1;

        while(i >=0 && j>=0){
            sum += prices[i]*(100.0- discounts[j])/100.0;

            j--;
            i--;
        }

        while(i>=0){
            sum+= prices[i];
            i--;
        }

        return sum;
    }
};