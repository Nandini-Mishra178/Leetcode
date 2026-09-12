class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> v;
        unordered_map<int, int> hm;
        for(int i:nums){
            hm[i]++;
        }
        for(auto i:hm){
            if(i.second==1) v.push_back(i.first);
        }
        return v;
    }
};