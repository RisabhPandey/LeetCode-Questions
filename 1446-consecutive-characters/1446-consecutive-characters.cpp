class Solution {
public:
    int maxPower(string s) {
        int curr =1;
        int maxPow = 1;

        for(int i=1; i<s.size();i++){
            if(s[i-1] == s[i]){
                curr++;
            }
            else{
                curr =1;
            }
            maxPow = max(maxPow, curr); 
        }
        return maxPow;
    }
};