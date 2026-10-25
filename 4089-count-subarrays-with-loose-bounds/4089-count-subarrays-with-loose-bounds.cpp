class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long c = 0;
        int l = 0, n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] < minK || nums[i] > maxK) {
                l = i + 1;
                
            }else{
                c+=i-l+1;
            }
        }
        
        return c;
    }
};