class Solution {
public:

    

    bool isprime(int n){
        if(n <=1){
            return false;
        }

        if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
        for(int i = 5 ; i*i <= n ; i += 6){
                if(n % i == 0 || n % (i + 2) == 0){
                    return false;
                }
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int op = 0;
        
        for(int i = 0 ; i < nums.size(); i+=2){
            if(isprime(nums[i])){
               continue;
            }else{
                while(!isprime(nums[i])){
                    nums[i]++;
                    op++;
                }
            }
        }

        for(int i =1 ; i < nums.size() ; i += 2){
            if(isprime(nums[i])){
                op += (nums[i] == 2) ? 2 : 1;
            }
        }

        return op;
    }
};