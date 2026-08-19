class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
     int n=nums.size();
     bool nonZero = false;
     int res=0;
    for(int i=0; i<n; i++){
         res=res^nums[i];
                     if (nums[i] != 0)
                nonZero = true;
    }
     if(res!=0){
      return n;}
       if (nonZero)
            return n - 1;
     return 0;}
};