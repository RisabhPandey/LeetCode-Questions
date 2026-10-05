class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        int count = 0;
        for(char ch: s){
            if(ch == '('){
                st.push(0);
            }
            else if(ch == ')'){
                int inner = st.top();
                st.pop();
                if(inner == 0){
                    count = 1;
                }
                else{
                    count = inner*2;
                }
                st.top() += count;
            }
        }
        return st.top();
    }
};