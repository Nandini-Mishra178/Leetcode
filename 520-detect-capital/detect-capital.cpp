class Solution {
public:
    bool detectCapitalUse(string word) {
        int up= 0;
 for(char c: word) {
     if(c>='A' && c<='Z') {
             up++;
            }
        }
    return up== 0 || up== word.size() || (up==1 && word[0]>='A' && word[0]<='Z'); }
};