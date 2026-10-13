class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long score=0;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                nums[i]=nums[i]*(-1);
            }
        }
        sort(nums.begin(), nums.end(), greater<int>());
        if(n%2==0){
        for(int j=0; j<n; j++){
            if(j<(n/2)){
                score=score+pow(nums[j],2);
            }
            else{
                score=score-pow(nums[j],2);
            }
        }}
        else{
            for(int j=0; j<n; j++){
            if(j<=(n/2)){
                score=score+pow(nums[j],2);
            }
            else{
                score=score-pow(nums[j],2);
            }
        }}
    return score;}
};