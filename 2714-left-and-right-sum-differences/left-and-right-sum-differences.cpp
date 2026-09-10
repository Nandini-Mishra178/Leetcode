class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        vector<int> left;
        vector<int> right;
        left.push_back(0);
        int sum=0;
        for(int i=1; i<nums.size(); i++){
            left.push_back(left[i-1]+nums[i-1]);
        }
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            right.push_back(sum-nums[i]);
            sum=sum-nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            ans.push_back(abs(left[i]-right[i]));
        }
     return ans;}
};