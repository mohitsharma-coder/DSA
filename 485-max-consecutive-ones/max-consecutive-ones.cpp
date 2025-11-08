class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
        int temp=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                maximum = max(temp,maximum);
                temp=0;
            }
            else
            temp++;
        }
        maximum = max(temp,maximum);
        return maximum;
    }
};