class Solution {
    public int maximumCount(int[] nums) {
        int lastnegIndex = lastNegative(nums) +1;
        int firstposIndex = nums.length - firstPositve(nums);

        return Math.max(lastnegIndex,firstposIndex);
    }

    public int lastNegative(int[] nums){
        int st =0;
        int end =nums.length-1;
        int ans =-1;

        while(st<=end){
            int mid = (st+end)/2;

            if(nums[mid]<0){
                ans = mid;
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }

    public int firstPositve(int[] nums){
        int st = 0;
        int end = nums.length-1;
        int ans = nums.length; 
        
        while(st<=end){
            int mid =(st+end)/2;
            
            if(nums[mid]>0){
                end = mid-1;
                ans = mid;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
}