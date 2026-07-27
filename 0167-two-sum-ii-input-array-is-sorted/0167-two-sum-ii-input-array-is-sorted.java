class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] ans = new int[2];
        int start = 0;
        int end = numbers.length -1;

        while(start < end){
            
            int ss = numbers[start];
            int es = numbers[end];
            int sum = ss+es;

            if(sum == target){
                start +=1;
                end +=1;
                ans[0] = start;
                ans[1] = end;
                return ans;
            }
            else if(sum > target){
                end--;
            }
            else{
               start ++;
            }
        }
        return ans;
    }
}