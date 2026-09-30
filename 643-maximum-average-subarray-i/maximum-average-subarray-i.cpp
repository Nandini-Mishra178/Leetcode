class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxx=0, sum=0;
        for(int i=0; i<k; i++){
             sum+=nums[i];
        }
        maxx=sum;
        int l=0, r=k-1;
         while(r+1<nums.size()){
            sum=sum-nums[l];
            sum=sum+nums[r+1];
            l++;
            r++;
            maxx=max(maxx, sum);
         }
    return (double)maxx/k;}
};