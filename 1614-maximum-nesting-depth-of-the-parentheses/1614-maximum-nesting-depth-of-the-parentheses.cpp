class Solution {
public:
    int maxDepth(string s) {
        int maxCount = 0;
        int count = 0;
        for(char ch: s){
            if(ch == '('){
                count++;
            }
            else if(ch == ')'){
                count--;
            }
            maxCount = max(count,maxCount);
        }
        return maxCount;
    }
};