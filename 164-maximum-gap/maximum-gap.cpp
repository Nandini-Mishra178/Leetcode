class Solution {
public:
    int maximumGap(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(), nums.end());
    int count=0, count1=0;
 if(n<2) return 0;
    for(int i=0; i<n-1; i++){
        count1=abs(nums[i]-nums[i+1]);
        if(count1>count) count=count1;
    }
    return count;}
};