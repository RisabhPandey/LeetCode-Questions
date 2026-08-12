class Solution {
    public int findDuplicate(int[] nums) {
        int n = nums.length;
        for(int i= 0; i<n; i++){
            int ele = nums[i];
            ele = Math.abs(ele);
            if(nums[ele] > 0){
                nums[ele] = -nums[ele];
            }
            else{
                return ele;
            }
        }
        for(int i = 0; i<n ;i++){
           nums[i] =  Math.abs(nums[i]);
        }
        return -1;
    }
}