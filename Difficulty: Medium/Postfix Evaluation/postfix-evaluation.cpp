class Solution {
  public:
    static int Operator(int a, int b, string token) {
        if (token == "+") {
            return a + b;
        }
        else if (token == "-") {
            return a - b;
        }
        else if (token == "*") {
            return a * b;
        }
        else if (token == "/") {
            // Floor division that works for negative numbers
            // C++ truncates toward zero, we need floor
            int result = a / b;
            // If both numbers have different signs and division isn't exact
            if ((a < 0) != (b < 0) && a % b != 0) {
                result--;  // Adjust toward negative infinity
            }
            return result;
        }
        else if (token == "^") {
            // Exponentiation using fast power or pow
            return (int)pow(a, b);
        }
        return 0;
    }
    
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;
        
        // Set of valid operators
        unordered_set<string> operators = {"+", "-", "*", "/", "^"};
        
        for (const string& token : arr) {
            if (operators.count(token)) {
                // Operator encountered - pop two operands
                if (st.size() < 2) {
                    throw runtime_error("Invalid postfix expression");
                }
                
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                
                int result = Operator(a, b, token);
                st.push(result);
            } else {
                // Operand - convert to integer and push
                st.push(stoi(token));
            }
        }
        
        // After processing all tokens, stack should have exactly one value
        if (st.size() != 1) {
            throw runtime_error("Invalid postfix expression");
        }
        
        return st.top();
    }
};