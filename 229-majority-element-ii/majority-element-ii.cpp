class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vec;
       unordered_map<int, int> hm;
       for(int i: nums){
        hm[i]++;
       } 
       for(auto i:hm){
        if(i.second>(nums.size()/3))
        vec.push_back(i.first);
       }
   return vec; }
};