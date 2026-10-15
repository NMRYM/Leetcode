class Solution {
public:
    int sumCounts(vector<int>& nums) {
        set<int> s;
        int sum=0,n=nums.size();


        for(int i = 0 ; i < n ;i++){
            unordered_set<int> distinctElements;
            for (int j = i; j < n; ++j) {
                
                distinctElements.insert(nums[j]);
                
                
                int count = distinctElements.size();
                sum += count * count;
            }
        }
                    return sum;

    }
};