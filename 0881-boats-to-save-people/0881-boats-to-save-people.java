class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int n = people.length;
        int bCount =0;
        int l = 0;
        int r = n-1;
        Arrays.sort(people);
        while(l<=r){
            if(people[l]+people[r] <= limit){
                l++;
                r--;
                bCount++;
            }
            else{
                r--;
                bCount++;
            }
        }
        return bCount;
    }
}