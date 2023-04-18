class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_map;
        unordered_map<char, char> t_map;

        for (int i = 0; i < s.length(); ++i) {
            if (s_map.find(s[i]) == s_map.end()) {
                s_map[s[i]] = t[i];
            }

            if (t_map.find(t[i]) == t_map.end()) {
                t_map[t[i]] = s[i];
            }

            if (s_map[s[i]] != t[i] || t_map[t[i]] != s[i]) {
                return false;
            }
        }

        return true;
    }
};
