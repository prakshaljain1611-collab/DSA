class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(char c:s){
            if(c=='('){
                st.push(0);
            }
            else{
                int x;
               if(st.top()==0){
                 x=1;
               }
               else{
                 x=st.top()*2;
               }
               st.pop();
               st.top()+=x;
            }
        }
        return st.top();
    }
};