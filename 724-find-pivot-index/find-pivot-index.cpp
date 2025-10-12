class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long rsum = 0;
        for(int ele : nums){     //total of given values
            rsum = rsum + ele;
        }
        long long lsum = 0;
        for( int i =0; i<nums.size();i++){   
            rsum = rsum - nums[i];            //minus rsum to find pivot and check it is eqaul to left sum or not
            if( rsum == lsum){
                return i;
            }
            else{
                lsum = lsum + nums[i];
            }
        }
        return -1;
    }
};