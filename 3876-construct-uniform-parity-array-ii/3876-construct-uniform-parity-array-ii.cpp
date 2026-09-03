class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int even= 0, odd= 0;
       int min_val = nums1[0];
       for(int n :nums1){
        min_val = min(min_val, n);
            if(n % 2==0) even++;
            else odd++;
       } 

       if(even == nums1.size() || odd == nums1.size()){
            return true;
       }

       return min_val % 2 != 0;
        


    }
};