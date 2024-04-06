// 32. Longest Valid Parentheses
// Solution:
// CODE:
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1); // To handle edge case where the first parenthesis is ')'
        int max_length = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                stk.push(i);
            }else{
                stk.pop();
                if(stk.empty()){
                    stk.push(i);
                }else{
                    // Calculate the length of the current valid substring by subtracting the index of top element in the stack from current index
                    max_length = max(max_length, i - stk.top());
                }
            }
        }
        return max_length;
    }
};
