class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int newBottle ;
        int remBottle;
        int ans = numBottles;
        while(numBottles >= numExchange){
            newBottle = numBottles / numExchange;
            remBottle = numBottles % numExchange;
            ans += newBottle;
            numBottles = newBottle + remBottle;
        }
        return ans;
    }
}