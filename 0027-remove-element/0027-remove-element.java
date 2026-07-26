class Solution {
    public int removeElement(int[] nums, int val) {
       int ptr = 0;
       int n = nums.length;

       for(int i= 0; i< n; i++){

        if(nums[i] != val){
            nums[ptr] = nums[i];
            ptr++;
        }

       } 
       return ptr;
    }
}