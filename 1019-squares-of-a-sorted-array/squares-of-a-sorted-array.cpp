class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int> v(nums.size());
      int l=0, r=nums.size()-1, p=v.size()-1;
      while(l<=r){
        int k=max(pow(nums[l],2), pow(nums[r],2));
        v[p]=k;
        p--;
        if(pow(nums[l],2)> pow(nums[r],2)){
            l++;
        }
        else r--;
      }
    return v;}
};