class Solution {
public:
    int maxPower(string s) {
        int count = 1; 
        int maxPow = 1;

        for(int i=1; i< s.size(); i++){
            if(s[i-1] == s[i]){
                count++ ;
            }
            else{
                count = 1;
            }
            maxPow = max(maxPow, count);
        } 
        return maxPow;
    }
};