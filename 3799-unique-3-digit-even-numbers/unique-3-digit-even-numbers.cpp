class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> unique;
        for(int i=0; i<digits.size(); i++){
            if(digits[i]%2==1){
                continue;
            }
        for(int j=0; j<digits.size(); j++){
            if(j==i){ continue;}
        
        for(int k=0; k<digits.size(); k++){
            if(digits[k]==0|| k==j || k==i) {continue;}
        
         int number = digits[k] * 100 + digits[j] * 10 + digits[i];
         unique.insert(number);
        }}}
    return unique.size();}
};