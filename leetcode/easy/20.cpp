class Solution {
public:
    bool isValid(string s) {
        const set<char> open = { '(', '[', '{' };
        const map<char, char> open_to_closed = {
            {'(', ')'},
            {'[', ']'},
            {'{', '}'}
        };

        vector<char> stack;

        for (auto& ch : s) {
            if (open.find(ch) != open.end()) {
                stack.push_back(ch);
            } else if (stack.size() > 0) {
                if (open_to_closed.find(stack.back())->second != ch) {
                    return false;
                } else {
                    stack.pop_back();
                }
            } else {
                return false;
            }
        }

        return stack.empty() ? true : false;
    }
};
