class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = -1;
        int max2 = -1;
        int maxID = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max1){
                max2=max1;
                max1=nums[i];
                maxID= i;
                }
            else if(nums[i]>max2)
                max2=nums[i];
            }

        if(max2*2>max1)
        return -1;
        else
        return maxID;
    }
};