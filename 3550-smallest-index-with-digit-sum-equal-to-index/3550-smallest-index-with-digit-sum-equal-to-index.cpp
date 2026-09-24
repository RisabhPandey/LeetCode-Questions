class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i= 0; i<n; i++){
            if(nums[i] > 9){
                int digit = log(nums[i])+1;
                int num = nums[i];
                int sum =0;
                while(digit > 0){
                    sum += num%10;
                    num = num/10;
                    digit--;
                }
                if(sum == i) return i;
            }
            else{
                if(nums[i] == i) return i;
            }
        }
        return -1;
    }
};