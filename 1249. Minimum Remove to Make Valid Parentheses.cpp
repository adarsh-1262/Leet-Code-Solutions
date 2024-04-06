// 1249. Minimum Remove to Make Valid Parentheses
// Solution:
// CODE:
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                if(!st.empty()){
                    st.pop();
                }else{
                    s[i] = '*'; // Mark for Removal
                }
            }
        }
        while(!st.empty()){
            s[st.top()] = '*'; //Mark for Removal
            st.pop();
        }
        string result = "";
        for(char c : s){
            if(c != '*'){
                result += c;
            }
        }
        return result;
    }
};
