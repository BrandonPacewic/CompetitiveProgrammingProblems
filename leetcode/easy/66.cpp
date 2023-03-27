class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // First: Go through like normal carrying the one.
        for (int i = digits.size() - 1; i >= 0; --i) {
            ++digits[i];

            if (digits[i] == 10) {
                digits[i] = 0;
            } else {
                break;
            }
        }

        // If you reach the end construct a new vector.
        if (digits.front() != 0) {
            return digits;
        }

        vector<int> new_digits;
        new_digits.push_back(1);

        for (auto& x : digits) {
            new_digits.push_back(x);
        }

        return new_digits;
    }
};
