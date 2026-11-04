class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> v;
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0; i<rows; i++){
            int min1= *min_element(matrix[i].begin(), matrix[i].end());
     int index = find(matrix[i].begin(), matrix[i].end(), min1) - matrix[i].begin();
     int max1 = matrix[0][index];
     for(int r=1; r<rows; r++) {
    max1= max(max1, matrix[r][index]);
      }
     if(min1==max1) v.push_back(min1);
        }
    return v;    
    }
};