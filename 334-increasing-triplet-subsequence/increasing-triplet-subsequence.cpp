class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstElement = INT_MAX;
        int secondElement = INT_MAX;
        int thirdElement = INT_MAX;

        for(int number : nums){                 //TAKE ALL VALUE WHICH PRESENT IN NUMS
            

            if(firstElement>=number)
            firstElement = number;

            else if(secondElement>=number)
            secondElement = number;

            else
            return true;
        }
        return false;
    }
};