class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        k = k % nums.size();    // for handle k>n case
        
        reverse(nums.begin(),nums.end()); // reverse entire array

        reverse(nums.begin(),nums.begin()+k); // reverse first k element // begin +k use where to end

        reverse(nums.begin()+k,nums.end()); // reverse reamining element  // begin+k show where to strt

    }
};