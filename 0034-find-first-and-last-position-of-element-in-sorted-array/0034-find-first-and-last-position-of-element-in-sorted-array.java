class Solution {
    public int[] searchRange(int[] nums, int target) {
        int []ans = {-1,-1};
        
        if(nums.length == 0) return ans;

        ans[0] = firstOccurence(nums,target);
        ans[1] = LastOccurence(nums,target);

        return ans;

    }
    public int firstOccurence(int[]nums, int target){
        int st = 0;
        int end = nums.length -1;
        int ans = -1;

        while(st<=end){
            int mid = (st+end)/2;

            if(nums[mid]==target){
                ans = mid;
                end = mid -1;
            }
            else if(target > nums[mid]){
                st = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
    public int LastOccurence(int[]nums, int target){
        int st = 0;
        int end = nums.length -1;
        int ans = -1;

        while(st<=end){
            int mid = (st+end)/2;

            if(nums[mid]==target){
                ans = mid;
                st = mid + 1;
            }
            else if(target > nums[mid]){
                st = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
}
}