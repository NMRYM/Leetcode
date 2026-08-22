class Solution {
public:
    bool checkDivisibility(int n) {
        int digit_sum =0,prod=1;
        int org=n;

        while(org!=0){
            digit_sum += org%10;
            prod *= org%10;
            org /= 10;
        }

        int sum = prod + digit_sum;

        return n%sum == 0;
    }
};