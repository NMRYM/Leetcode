class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int mini=INT_MAX;
        for(int i = 0 ; i<n ;i+=2){
            int a = nums[i];
            int b = nums[i+1];
            int org =b;
            int c=0;
            while(org !=0){
                c++;
                org /=10;
            }

            mini = min(mini, static_cast<int>((a*pow(10,c))+b));
        }

        return mini;
    }
};