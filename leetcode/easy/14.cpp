class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), [&](string& a, string& b) {
            return a.length() > b.length();
        });

        string ans = strs.front();

        for (auto& str : strs) {
            if (ans.length() == 0) {
                break;
            }

            while (ans != str.substr(0, ans.length())) {
                ans = ans.substr(0, ans.length() - 1);
            }
        }

        return ans;
    }
};
