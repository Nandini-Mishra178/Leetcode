class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
      unordered_map<int,int> hm;
      for(int i:nums){
            hm[i]++;
        }
        for(int i:nums){
            if(i%2==0 && hm[i]==1)
            return i;
        }
      return -1;
    }
};