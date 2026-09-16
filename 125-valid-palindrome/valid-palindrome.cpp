class Solution {
public:
    bool isPalindrome(string s) {
        string l="";
        for(char c:s){
              if(isalnum(c)){
                l+=tolower(c);
              }
        }
        if(l=="") return true;
    int k=0;
    int r=l.length()-1;
    while(k<=r){
        if(l[k]!=l[r]){
          return false;
        }
        else if(l[k]==l[r]){
            k++;
            r--;
        }
    }
   return true; }
};