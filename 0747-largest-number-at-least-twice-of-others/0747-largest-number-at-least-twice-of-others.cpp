class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = -1;
        int sec_max = -1;
        int n = size(nums);
        int idx;
        
        for(int i= 0; i<n; i++){
            if(max<nums[i]){
                sec_max = max;
                max = nums[i];
                idx = i;
            }
            else if(sec_max < nums[i]){
                sec_max = nums[i];
            }
        }
        if(max >= (2*sec_max)){
            return idx;
        }
        else{
            return -1;
        }
    }
};