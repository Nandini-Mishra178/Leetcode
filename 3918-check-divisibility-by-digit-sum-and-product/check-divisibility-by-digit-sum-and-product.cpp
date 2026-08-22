class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,sum1=0, prod=1;
        int temp=n,temp1=n;
        while(temp){
            sum1=sum1+temp%10;
            temp/=10;
        }
        while(temp1){
             prod=prod*(temp1%10);
             temp1/=10;
        }
        sum=sum1+prod;
        if(n%sum==0) return true;
        else return false;
    }
};