class Solution {
    public void sortColors(int[] nums) {
       int low = 0;
       int mid = 0;
       int high = nums.length -1 ;

       while(mid <= high){
            if(nums[mid] == 0){
                swap(nums,low,mid);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid +=1;
            }
            else{
                swap(nums,high, mid);
                high -=1;
            }
       }
    }

    public void swap(int[]nums, int i, int j){
        int k = nums[i];
        nums[i] = nums[j];
        nums[j] = k;
    }
}