class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
          int l=0, r=numbers.size()-1;
          while(l<r){
            int sum=numbers[l]+numbers[r];
            if(sum==target){
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            else if(sum<target) l++;
            else r--;
          }
                    
    return v;}
};