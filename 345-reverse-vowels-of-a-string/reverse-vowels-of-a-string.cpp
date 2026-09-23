class Solution {
public:
    string reverseVowels(string s) {
        unordered_set <char>set;
        set.insert('a');
        set.insert('e');
        set.insert('i');
        set.insert('o');
        set.insert('u');
        set.insert('A');
        set.insert('E');
        set.insert('I');
        set.insert('O');
        set.insert('U');
        vector<char> ar(s.begin(), s.end());
    int l=0, r=ar.size()-1;
    while(l<r){
    if(set.find(ar[l]) != set.end() && set.find(ar[r])!= set.end()){
        swap(ar[l],ar[r]);
        l++;
        r--;
    }
    else if( set.find(ar[r])== set.end()){
        r--;
    }
    else if(set.find(ar[l]) == set.end() ){
        l++;
    }}
 string s1(ar.begin(),ar.end());
return s1;}
};