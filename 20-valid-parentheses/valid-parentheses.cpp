class Solution {
public:
    bool isValid(string s) {
        stack<char> parantheses;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (c == '(' || c == '{' || c == '[') {
                parantheses.push(c);
            } 
            else {
                // If stack empty 
                if (parantheses.empty()) return false;

                // matching
                if ((parantheses.top() == '(' && c == ')') ||
                    (parantheses.top() == '[' && c == ']') ||
                    (parantheses.top() == '{' && c == '}'))
                 {
                    parantheses.pop();
                } 
                else {
                    return false;
                }
            }
        }       
        return parantheses.empty();
    }
};
