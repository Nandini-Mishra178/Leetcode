class Solution {
public:
    int pivotInteger(int n) {
        int sum=0, sum1=0;
        for(int i=1;i<=n; i++){
            sum+=i;
        }
        for(int j=1; j<=n; j++){
           sum1+=j;
           int sum2=sum-sum1+j;
           if(sum1==sum2){
            return j;
           }
        }
    return -1;}
};