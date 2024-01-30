// 150. Evaluate Reverse Polish Notation:
// Solution:-

// CODE:
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operands;

        for (const string& token : tokens) {
            if (isOperator(token)) {
                int operand2 = operands.top();
                operands.pop();
                int operand1 = operands.top();
                operands.pop();

                if (token == "+")
                    operands.push(operand1 + operand2);
                else if (token == "-")
                    operands.push(operand1 - operand2);
                else if (token == "*")
                    operands.push(operand1 * operand2);
                else if (token == "/") {
                    if (operand2 == 0)
                        throw logic_error("Division by zero");
                    operands.push(operand1 / operand2);
                }
            } else {
                operands.push(stoi(token));
            }
        }

        return operands.top();
    }

private:
    bool isOperator(const string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/";
    }
};
