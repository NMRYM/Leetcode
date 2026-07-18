class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = INT_MAX, mx = 0;

        for(int num : nums){
            if(num >mx){
                mx = num;
            }

            if(num < mn){
                mn = num;
            }
        }

        return gcd(mn,mx);
    }
};