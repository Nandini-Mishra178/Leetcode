class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> hm;
        int sum=0;
        for(int i:nums){
            hm[i]++;
        }
        for(auto i:hm){
            if(i.second%k==0){
                sum=sum+(i.first*i.second);
            }
        }
    return sum;}
};