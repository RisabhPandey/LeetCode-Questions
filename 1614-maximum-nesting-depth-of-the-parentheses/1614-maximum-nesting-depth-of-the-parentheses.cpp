class Solution {
public:
    int maxDepth(string s) {
        int maxPar = 0;
        int par = 0;
        for(char ch : s){
            if(ch == '('){
                par++;
            }
            else if(ch == ')'){
                par--;
            }
            maxPar = max(par,maxPar);
        }
        return maxPar;
    }
};