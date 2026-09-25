int val(string s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        int v=int(s[i])- int('a');
        sum=sum*10+v;
    }
    return sum;
}
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        if((val(firstWord)+ val(secondWord)) == val(targetWord)){
            return true;
        }
    return false; }
};