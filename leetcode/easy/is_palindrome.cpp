class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        char* left = &s[0];
        char* right = &s[s.size() - 1];

        while (left < right) {
            if (*left != *right) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
