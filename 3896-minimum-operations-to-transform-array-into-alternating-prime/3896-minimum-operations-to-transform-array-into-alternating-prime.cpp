class Solution {
public:

    

    bool isprime(int n){
        if(n <=1){
            return false;
        }
        for(int i = 2 ; i*i <= n ; i++){
                if(n%i == 0){
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