class Solution {
    public int firstMissingPositive(int[] nums) {
      HashSet<Integer> hs= new HashSet<>();
      for(int num:nums){
        if(num>0){
        hs.add(num);}
      }
      int ans=1;
      while(hs.contains(ans)){
        ans++;
      }  
    return ans;}
}