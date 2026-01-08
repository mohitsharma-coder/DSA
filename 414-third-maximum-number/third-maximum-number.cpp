class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1 = nums[0];
        long max2 = LONG_MIN;
        long max3 = LONG_MIN;

        for(int i = 1; i<nums.size(); i++){
            
            if(max1<nums[i]){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            
            }
            else if(max2<nums[i] && nums[i]<max1){
                 max3 = max2;
                 max2 = nums[i];
           
            }
            else if (max3<nums[i] && nums[i]<max2){
                max3 = nums[i];
            }
            
        }

        if(max3 == LONG_MIN)
        {
                return max1;
        }
        return max3;

    }
};