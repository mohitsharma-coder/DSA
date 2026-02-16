class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int leftsum = 0;
       int rightsum = 0;
      //starting k sare add kar lenga jitna k size hai 
       for(int i = 0; i<k; i++){
        leftsum = leftsum + cardPoints[i];
       } 

       int maxSum = leftsum;
       int rightindx = cardPoints.size() - 1;

    //front window k last element se ak remove karega or back se add karega
       for(int i = k-1; i>=0; i--){
        leftsum = leftsum - cardPoints[i]; //remove form front
        rightsum = rightsum + cardPoints[rightindx];//add from back
        rightindx--;
        maxSum = max(maxSum,leftsum + rightsum);
       }
    return maxSum;
    }
};