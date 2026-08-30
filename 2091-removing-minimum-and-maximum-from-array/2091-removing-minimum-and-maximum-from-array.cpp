class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIdx = 0, maxIdx = 0;
        int mini = INT_MAX, maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIdx = i;
            }
            if (nums[i] < mini) {
                mini = nums[i];
                minIdx = i;
            }
        }

        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);

        return min({right + 1, n - left, (left + 1) + (n - right)});
    }
};