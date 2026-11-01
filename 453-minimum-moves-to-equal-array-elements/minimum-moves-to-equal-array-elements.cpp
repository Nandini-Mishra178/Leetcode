class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min1=*min_element(nums.begin(), nums.end());
        int count=0;
        for(int i=0; i<nums.size(); i++){
            count+=(nums[i]-min1);
        }
        return count;
    }
};