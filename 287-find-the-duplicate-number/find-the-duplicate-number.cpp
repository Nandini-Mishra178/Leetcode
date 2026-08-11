class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>hm;
        for(int i:nums){
            hm[i]++;
        }
        for(auto l:hm){
            if(l.second>1)
            return l.first;
        }
    return 0;}
};