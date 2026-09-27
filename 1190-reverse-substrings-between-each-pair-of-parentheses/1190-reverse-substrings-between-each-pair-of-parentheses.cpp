class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string r = "";
        for (char c : s) {
            if (c == ')') {
                while (st.top() != '(') {
                    r += st.top();
                    st.pop();
                }
                st.pop();
                for (char ch : r) {
                    st.push(ch);
                }
                r = "";
            } else {
                st.push(c);
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};