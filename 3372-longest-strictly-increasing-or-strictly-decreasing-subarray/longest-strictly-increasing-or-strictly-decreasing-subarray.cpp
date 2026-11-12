class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incs=1, decs=1, ans=1;
     for(int i=1; i<nums.size(); i++){
        if(nums[i]>nums[i-1]){
            decs++;
            incs=1;
        }
        else if(nums[i]<nums[i-1]){
            incs++;
            decs=1;
        }
        else{
            incs=1;
            decs=1;
        }
     ans=max(ans, max(incs,decs));}
    return ans;}
};