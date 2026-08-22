class Solution {
public:
    bool checkDivisibility(int n) {
        int digit_sum =0,prod=1,org=n;

        while(n!=0){
            digit_sum += n%10;
            prod *= n%10;
            n /= 10;
        }

        int sum = prod + digit_sum;

        return org%sum == 0;
    }
};