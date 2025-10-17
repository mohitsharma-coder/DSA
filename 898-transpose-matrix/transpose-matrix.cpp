class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size(); //access the first row of the matrix

         vector<vector<int>> ans(column, vector<int>(row));// new matrix

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                ans[j][i] = matrix[i][j]; // swap index 01->10,02->20
            }
        }
        return ans;
    }
};