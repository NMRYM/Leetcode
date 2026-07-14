class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
         int n= nums.size(),count =0;

         for(int i=0 ;i< n ;++i){
            long long sum=0;
            for( int j = i ; j < n ; ++j){
                sum+= nums[j];

                int last = sum % 10;
                long long temp = sum;
                while(temp >= 10){
                    temp /= 10;
                }

                int first = temp;

                if(first== x && last == x){
                    count++;
                }
            }
           
         }
         

         return count;

    }
};