class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int left = 0;
       int right = 0;
       int zeroCount = 0;
       int Length = 0;

       for(right = 0; right<nums.size(); right++){
            
            if(nums[right] == 0){
                zeroCount++;
            }
            // jaise he zero > k then we decrease zero and shift left if zero comes
            while(zeroCount > k){
                if(nums[left] == 0)
                    zeroCount--;

                left++;
            }
            Length = max(Length , right - left + 1);
       } 
       return Length;
    }
};