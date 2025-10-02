class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = nums[0];
        for(int i=1;i<nums.size(); i++ ){
            if(nums[i]>nums[i-1])
                currSum += nums[i];
            else{
            maxSum = max(currSum, maxSum);
            currSum = nums[i];
        }
        }
        maxSum = max(currSum, maxSum);
        return maxSum;
    }
};