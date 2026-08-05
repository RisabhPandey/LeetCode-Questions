class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        if(n == 1) return nums[0];
        int max_sum = nums[0];
        int curr_sum = nums[0];
        for(int i=1; i<n;i++){
            if((curr_sum + nums[i]) > nums[i]){
                curr_sum += nums[i];
                max_sum = max(curr_sum, max_sum);
            }
            else{
                curr_sum = nums[i];
                max_sum = max(curr_sum, max_sum);
            }

        max_sum = max(curr_sum, max_sum);        
        }
        return max_sum;
    }
};