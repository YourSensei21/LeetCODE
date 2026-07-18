class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 == 1) {
            return false;
        }
        stack<char> stk;
        for (char curr : s) {
            if (curr == '(' || curr == '{' || curr == '[') {
                stk.push(curr);
            } else {
                if (stk.empty()) return false;

                if ((curr == ')' && stk.top() == '(') ||
                    (curr == '}' && stk.top() == '{') ||
                    (curr == ']' && stk.top() == '[')) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};
