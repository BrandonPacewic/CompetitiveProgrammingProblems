class Solution {
public:
    bool is_palindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left++] != s[right--]) {
                return false;
            }
        }

        return true;
    }

    bool isPalindrome(string s) {
        string clean_s;

        for (auto& ch : s) {
            if (isalnum(ch)) {
                clean_s += tolower(ch);
            }
        }

        return is_palindrome(clean_s);
    }
};
