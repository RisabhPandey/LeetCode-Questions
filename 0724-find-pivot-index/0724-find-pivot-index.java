class Solution {
    public int pivotIndex(int[] nums) {
        int sum =0; 
        int n = nums.length;
        for(int i= 0; i<n; i++){
            sum += nums[i];
        }
        int lSum = 0;
        for(int i=0; i<n; i++){
            int rSum = sum - lSum - nums[i];
            if(lSum == rSum) return i;

            lSum += nums[i]; 
        }
        return -1;
    }
}