class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int maxCapacity = 0;

        while(start<end){
            int h = min(height[start], height[end]);
            int width = end - start;

            int currCapacity = h*width;

            maxCapacity = max(currCapacity,maxCapacity);

            if(height[start]<height[end])
                start++;
            else
            end--;
        }
        return maxCapacity;
    }
};