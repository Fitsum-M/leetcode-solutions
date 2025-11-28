class Solution {
public:
    int calculate(string s) {
        long num = 0;
        char op = '+';
        stack<long> st;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (isdigit(c))
                num = num * 10 + (c - '0');

            if ((!isdigit(c) && c != ' ') || i == s.size() - 1) {
                if (op == '+') st.push(num);
                else if (op == '-') st.push(-num);
                else if (op == '*') {
                    long t = st.top(); st.pop();
                    st.push(t * num);
                }
                else if (op == '/') {
                    long t = st.top(); st.pop();
                    st.push(t / num);
                }
                op = c;
                num = 0;
            }
        }

        long res = 0;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        return res;
    }
};
