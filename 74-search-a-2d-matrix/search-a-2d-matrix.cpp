class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int column = matrix[0].size()-1;

        while(row<matrix.size() && column>=0){  //agr element na hua the loop rokne k liye

            if(target == matrix[row][column])
            return true;
            else if(target>matrix[row][column])
            row++;
            else
            column--;
        }
        return false;
    }
};