class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> pc;
       pc[0]=1;
        int count=0, sum=0;
        for(int i:nums){
            sum+=i;
        if(pc.find(sum-k)!=pc.end()){
            count+=pc[sum-k];
        }
        pc[sum]++;}
     return count;   }
};