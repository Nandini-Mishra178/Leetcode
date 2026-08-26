class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      for(int i=0; i<=nums.size(); i++){
        auto num=find(nums.begin(), nums.end(), k*(i+1));
        if(num!=nums.end()) continue;
        else
        return (k*(i+1));
      }
    
  return 0;  }
};