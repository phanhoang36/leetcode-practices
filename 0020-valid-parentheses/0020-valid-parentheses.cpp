class Solution {
public:
    bool isValid(string s) {
        // (())
        // [({}){}]
        
        // [({ -> stack
        
        // Dấu ngoặc ưu tiên bên trong, tức là thằng gần nhất với với dấu ngoặc đóng
        
        const int n = s.size();
        stack<char> st;
        unordered_map<char, char> um;
        um[')'] = '(';
        um[']'] = '[';
        um['}'] = '{';
        
        for (int i = 0; i < n; ++i) {
            if (um.count(s[i])) {
                if (st.size() == 0) {
                    return false;
                }
                char st_top = st.top();
                st.pop();
                if (st_top != um[s[i]]) {
                    return false;
                }
            }
            else {
                st.push(s[i]);
            }
        }
        
        // ((((
        // ))))
        
        if (st.size()) {
            return false;
        }
        
        return true;
    }
};