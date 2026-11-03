class Solution {
public:
    int minMoves(vector<int>& nums) {
     int count=0;
     int max1= *max_element(nums.begin(), nums.end());
     for(int i=0; i<nums.size(); i++){
        count+=(max1-nums[i]);
     }   
   return count; }
};