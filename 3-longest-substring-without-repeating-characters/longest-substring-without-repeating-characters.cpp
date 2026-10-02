class Solution {
public:
    int lengthOfLongestSubstring(string s) {
unordered_set<char> hs;
        int l= 0, len= 0;
        for (int i= 0; i< s.size(); i++) {
            while (hs.find(s[i]) != hs.end()) {
                hs.erase(s[l]);
                l++;
            }
            hs.insert(s[i]);
            len= max(len, i-l+1);
        }
        return len;  }
};