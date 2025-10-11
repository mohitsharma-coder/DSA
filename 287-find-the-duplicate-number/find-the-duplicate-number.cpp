class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{                                        // run slow fast pointeer approach 
            slow = nums[slow];       //+1
            fast = nums[nums[fast]]; //+2
        }while(slow!=fast);                        // jab tak slow is not equal to fast

        slow = nums[0];                            // when slow==fast the again slow strt from 1st index
        while(slow!=fast){
            slow = nums[slow];  //+1
            fast = nums[fast];   //+1
        }
        return slow;


    }
};