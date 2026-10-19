class Solution {
public:
    double average(vector<int>& salary) {
        double avg=0;
    sort(salary.begin(), salary.end());
    for(int i=1; i<salary.size()-1; i++){
        avg+=salary[i];
    }
    return avg/(salary.size()-2);
    }
};