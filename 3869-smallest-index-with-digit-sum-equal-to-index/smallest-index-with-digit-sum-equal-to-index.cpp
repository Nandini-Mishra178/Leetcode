int sum(int i){
    int sum1=0;
    while(i){
        sum1+=i%10;
        i/=10;
    }
    return sum1;
}
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
 for(int j=0; j<nums.size(); j++){
    if(j==sum(nums[j])) return j;
 }       
    return -1;}
};