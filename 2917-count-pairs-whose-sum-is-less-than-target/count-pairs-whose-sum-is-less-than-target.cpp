class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
      int l=0, r=nums.size()-1, count=0;
      sort(nums.begin(), nums.end());
      while(l<r){
        if(nums[l]+nums[r]<target){
        count=count+(r-l);
        l++;
      }  
      else r--;
    }
    return count;}
};