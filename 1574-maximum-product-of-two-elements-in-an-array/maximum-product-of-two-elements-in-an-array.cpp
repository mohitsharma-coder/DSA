class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=-1;
        int max2=-1;
        for(int i=0;i<nums.size();i++){
            if(max1<nums[i]){
                max2=max1;
                max1=nums[i];
            }
            else if(max2<nums[i]){
                max2=nums[i];
            }
        }
        int ans=(max1-1)*(max2-1);
        return ans;
    }

};