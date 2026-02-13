class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double i = 0;
        double sum = 0;
        double maximum = -1e9; // because hmare pass minus m bhi value hai 

        for(int j = 0; j<nums.size(); j++){
            sum = sum + nums[j];

            if(j-i+1 == k){
                maximum = max(maximum,sum);
                sum -= nums[i];
                i++;
            }  
        }
         return maximum/k;
    }
};