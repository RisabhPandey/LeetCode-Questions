class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int num = 0;
        int target_count = 0;

        for(int ele: nums){
            if(ele == target){
                target_count++;
            }
            else if(ele < target){
                num++;
            }
        }
        List<Integer>ans = new ArrayList<>();

        while(target_count > 0){
            ans.add(num);
            num++;
            target_count--;
        }
        return ans;
    }
}