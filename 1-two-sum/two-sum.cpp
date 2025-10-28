class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;  //first int=key second for value

        for(int i=0; i<nums.size();i++){
            int need = target - nums[i];

            if(ans.find(need) != ans.end()) // check the need is present or not in map
            {       //  prevous,current
            return {ans[need],i};
            }
            ans[nums[i]]=i; // store current number with index 
        }
        return {};
    }
};
