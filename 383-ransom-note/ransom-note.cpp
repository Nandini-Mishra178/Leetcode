class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hs;
        for(char c: magazine)
        hs[c]++;
        for(char c:ransomNote){
            if(hs[c]>0){
                hs[c]--;
            }
            else 
            return false;
        }
    return true;}
};