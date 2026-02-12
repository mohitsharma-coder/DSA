class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int strt = 0 ;
        int end = nums.size()-1;
        int count = 0;

        while(strt<end){
            if(nums[strt] + nums[end] == k){
                count++;
                strt++;
                end--;
            }
            // if (S+E)> total 
            else if((nums[strt] + nums[end]) > k){
                end--;
            }
            else{
            strt++;}
        }
        return count;
    }
};