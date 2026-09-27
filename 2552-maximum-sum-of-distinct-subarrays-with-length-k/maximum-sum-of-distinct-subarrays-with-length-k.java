class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        long sum = 0;
        long ans = 0;

        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            freq.put(nums[i], freq.getOrDefault(nums[i], 0) + 1);

            if (i >= k) {
                int removed = nums[i - k];
                sum -= removed;

                freq.put(removed, freq.get(removed) - 1);

                if (freq.get(removed) == 0) {
                    freq.remove(removed);
                }
            }

            if (i >= k - 1 && freq.size() == k) {
                ans = Math.max(ans, sum);
            }
        }

        return ans;
    }
}