class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int l=0, r=rows*columns-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int row=mid/columns;
            int col=mid%columns;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]>target) r=mid-1;
            else l=mid+1;
        }
        return false;}
};