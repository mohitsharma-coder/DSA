class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(int i=0;i<nums.size();i++){    //push number of element in minHeap box
            if(minHeap.size()< k){
                minHeap.push(nums[i]);
            }
            else if(nums[i]>minHeap.top()){     //top always shows minHeap smallest element
                minHeap.pop();                  //if top element is small than pop
                minHeap.push(nums[i]);          //and new element is push
            }
        }
        return minHeap.top();
    }
};