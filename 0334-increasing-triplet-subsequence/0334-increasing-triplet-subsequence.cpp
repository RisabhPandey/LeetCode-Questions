class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        int third = INT_MAX;
        int n = size(nums);

        for(int i = 0; i<n; i++){
            if(first >= nums[i]){
                first = nums[i];
            }
            else if(second >= nums[i]){
                second = nums[i];
            }
            else{
                third = nums[i];
                return true;
            }
        }
        return false;
    }
};