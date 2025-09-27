class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range=nums.size();

        int actaulSum= range*(range+1)/2; //sum of array element in maths formula n(n-1)/2
        int currSum=0;

        for(int i=0;i<range;i++){
        currSum = currSum + nums[i];// given array element ka total sum 
        }
        int ans = actaulSum - currSum;
        return ans; 

    }
};