class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l=0, r=n-1;
        int rmax = 0, lmax = 0, ans=0;

        while(l<r){
            //for boundary 
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);

            if(lmax<rmax){
                ans += lmax-height[l];
                l++;
            }
            else{
                ans += rmax - height[r];
                r--;
            }
        }
        return ans;
    }
};
//  int left = 0, right = height.size() - 1;
//         int leftmax = 0, rightmax = 0, total = 0;

//         while (left < right) {
//             if (height[left] <= height[right]) {
//                 if (height[left] >= leftmax)
//                     leftmax = height[left];
//                 else
//                     total += leftmax - height[left];
//                 left++;
//             } else {
//                 if (height[right] >= rightmax)
//                     rightmax = height[right];
//                 else
//                     total += rightmax - height[right];
//                 right--;
//             }
//         }
//         return total;