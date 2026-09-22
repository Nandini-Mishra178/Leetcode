class Solution {
public:
    int countOdds(int low, int high) {
     int num=(high-low)/2;
     if(low%2==0 && high%2==0){
        return num;
     }
     else return num+1;}
};