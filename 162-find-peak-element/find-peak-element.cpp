class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
        return 0;
        else if(nums[0]>nums[1])
        return 0;
        else if( nums[nums.size()-1]>nums[nums.size()-2])
            return nums.size()-1;

        int strt = 1;         // because we already check first and last index 
        int end = nums.size()-2;

        while(strt<=end){

            int mid = (strt + end)/2;

            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
            return mid;

            else if(nums[mid+1]>nums[mid])
            strt = mid+1;
            else
            end = mid-1;
        }
        return -1;
    }
};