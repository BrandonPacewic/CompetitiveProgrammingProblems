class Solution {
public:
    bool isPalindrome(char* left, char* right) {
        while (left < right) {
            if (*left++ != *right--) {
                return false;
            }
        }

        return true;
    }

    bool validPalindrome(string s) {
        char* left = &s[0];
        char* right = &s[s.length() - 1];

        while (left < right) {
            if (*left != *right) {
                return isPalindrome(left + 1, right) || isPalindrome(left, right - 1);
            } else {
                ++left;
                --right;
            }
        }

        return true;
    }
};
