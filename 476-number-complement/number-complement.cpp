class Solution {
public:
    int findComplement(int num) {
        int count=0;
        int temp=num;
     while(num!=0){
        num%2;
        count++;
        num/=2;
     }  
     int res=pow(2,count)-1;
     return temp^res;
    }
};