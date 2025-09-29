class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> ans(nums.size());
       int strt = 0;
       int end = nums.size()-1;
       int ptr = ans.size()-1;

       while(strt<=end){
        int ss = nums[strt] * nums[strt];
        int es = nums[end] * nums[end];

        if(ss>es){
          ans[ptr] = ss;
          strt++;
        }
       else{
        ans[ptr] = es;
        end--;
       }
       ptr--;
       }
       return ans;
    }
};