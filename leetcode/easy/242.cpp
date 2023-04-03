class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> counter;

        for (int i = 0; i < s.length(); ++i) {
            counter[s[i]]++;
            counter[t[i]]--;
        }

        for (const auto&[ch, count] : counter) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};
