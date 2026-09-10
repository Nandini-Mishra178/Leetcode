class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hm;
        for(int i:nums){
            hm[i]++;
        }
        for(auto i:hm){
            if(i.second==1)
             return i.first;
        }
    return 0;}
};