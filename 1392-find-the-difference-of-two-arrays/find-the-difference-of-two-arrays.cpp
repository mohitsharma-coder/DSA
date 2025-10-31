class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> first(nums1.begin(),nums1.end());
        unordered_set<int> second(nums2.begin(),nums2.end());
        vector<vector<int>> ans(2);

        for(int num : first){
            if(second.count(num)==0)
            ans[0].push_back(num);
        }
        
        for(int num : second){
            if(first.count(num)==0)
            ans[1].push_back(num);
        }
        return ans;
    }
};