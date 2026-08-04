class Solution {
    public int searchInsert(int[] nums, int target) {
        int st =0;
        int end = nums.length -1;
        

        while(st<=end){
            int mid =(st+end)/2;
            if(target == nums[mid]) return mid;

            if(nums[mid] > target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return st;
    }
}