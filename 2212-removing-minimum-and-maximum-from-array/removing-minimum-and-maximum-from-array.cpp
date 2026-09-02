class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int ans=0;
        int i=*max_element(nums.begin(),nums.end());
        int j=*min_element(nums.begin(),nums.end());

        int a=0,b=0,c=0,d=0;
        for(int k=0;k<nums.size();k++){
            if(nums[k]==i){
                a++;
                break;
            }
            else{
                a++;
            }
        }
        for(int q=nums.size()-1;q>-1;q--){
            if(nums[q]==i){
                b++;
                break;
            }
            else{
                b++;
            }
        }
        int s;
        int k;
    if(a<b){
        s=a-1;
        k=a;        
    }
    else{
        s=nums.size()-b;
        k=b;
    }

    for(int k=0;k<nums.size();k++){
            if(nums[k]==j){
                c++;
                break;
            }
            else{
                c++;
            }
        }
        for(int q=nums.size()-1;q>-1;q--){
            if(nums[q]==j){
                d++;
                break;
            }
            else{
                d++;
            }
        }
        int t;
        int m;
        if(c<d){
        t=c-1; 
        m=c;       
    }
    else{
        t=nums.size()-d;
        m=d;
    }

        int o=min(m,k);
        if(abs(t-s)+o < m+k){
            ans=abs(t-s)+o;
        }
        else{
            ans=m+k;
        }
        return ans;
    }
};