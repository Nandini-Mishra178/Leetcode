class Solution {
public:
bool palin(string m, int l, int r){
    while(l<=r){
        if(m[l]!=m[r])
        return false;
        else if(m[l]==m[r]){
            l++;
            r--;
        }
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
       if(s[i]!=s[j]){
        return (palin(s,i+1,j) || palin(s,i,j-1));
       }
    i++;
    j--;}
    return true;}
};