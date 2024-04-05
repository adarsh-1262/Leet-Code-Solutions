// 1544. Make The String Great
// Solution:
// CODE:
class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (!st.empty() && abs(st.top() - c) == 32) {
                // ASCII difference between uppercase and lowercase letters is 32
                st.pop(); // Remove the last character from stack
            } else {
                st.push(c); // Add character to stack
            }
        }
        
        string result = "";
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        
        return result;
    }
};
