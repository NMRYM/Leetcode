class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
       int l1=nums[0],l2=nums[1];

        for(int i = 2 ;i <nums.size();i++){
            if(l1>l2){
                arr1.push_back(nums[i]);
                l1=nums[i];
            }else{
                arr2.push_back(nums[i]);
                l2=nums[i];
            }
        }

        vector<int> result;

        for(int i = 0 ; i < arr1.size();i++){
            result.push_back(arr1[i]);
        }

        for(int i = 0 ; i < arr2.size();i++){
            result.push_back(arr2[i]);
        }

        return result;
    }
};