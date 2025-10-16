class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum =0;
        int n = mat.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j || i+j==n-1){         // n-1 is n size of array ;
                    sum = sum + mat[i][j];
                }
            }
        }
        return sum;
    }
};