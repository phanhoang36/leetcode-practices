class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        const int n = tokens.size();
        stack<int> st;
        // cout << stoi("-11");

        for (int i = 0; i < n; ++i) {
            bool check_number = true;
            string tmp = tokens[i];
            if (tokens[i][0] == '-' and tokens[i].size() > 1) {
                tmp = tokens[i].substr(1);
            }
            for (char c : tmp) {
                if (!isdigit(c)) {
                    check_number = false;
                    break;
                }
            }
            if (check_number) {
                st.push(stoi(tokens[i]));
            }
            else {
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                // stack = [1, 2]
                // theo thu tu 1 dau tien, 2 cuoi

                if (tokens[i] == "+") {
                    st.push(num1 + num2);
                }
                else if (tokens[i] == "-") {
                    st.push(num1 - num2);
                }
                else if (tokens[i] == "*") {
                    st.push(num1 * num2);
                }
                else {
                    st.push((int)(num1 / num2));
                }
                
                // cout << i << ' ' << st.top() << '\n';
            }
        }

        return st.top();
    }
};
