class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
 
        int lessCount = 0;     // Count of elements less than target
        int equalCount = 0;    // Count of elements equal to target

        for (int num : nums) {
            if (num < target) lessCount++;
            else if (num == target) equalCount++;
        }

        vector<int> result;
        for (int i = 0; i < equalCount; ++i) {
            result.push_back( lessCount + i);
        }

        return result;
    }
};