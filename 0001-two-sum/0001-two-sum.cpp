class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>hm;
        
        int n = nums.size();

        for(int i=0; i<n; i++){
            int diff = target - nums[i];

            if(hm.find(diff) != hm.end()){
                return{hm[diff], i};
            }

            hm[nums[i]] = i;

        }
        
        return{};
    }
};