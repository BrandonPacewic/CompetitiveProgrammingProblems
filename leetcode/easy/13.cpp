class Solution {
public:
    int romanToInt(string s) {
        const unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        
        for (int i = 0; i < s.size(); ++i) {
            if (i + 1 < s.size() && roman.at(s[i]) < roman.at(s[i + 1])) {
                result -= roman.at(s[i]);
            } else {
                result += roman.at(s[i]);
            }
        }
        
        return result;        
    }
};
