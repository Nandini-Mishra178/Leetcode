class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0, n=nums.size();

        for(int i=0; i<n; i++){
            sum=sum+((pow(-1,i))*nums[i]);
        }
 return sum;   }
};