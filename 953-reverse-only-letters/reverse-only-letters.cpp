class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> ar(s.begin(), s.end());
        int l=0, r=ar.size()-1;
        while(l<r){
            if(isalpha(ar[l]) && isalpha(ar[r])){
                swap(ar[l],ar[r]);
                l++;
                r--;
            }
            else if(!isalpha(ar[l])){
                l++;
            }
            else if(!isalpha(ar[r])){
                r--;
            }
        }
        string s1(ar.begin(), ar.end());
        return s1;
    }
};