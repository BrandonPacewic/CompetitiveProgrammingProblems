class Solution {
public:
    string addBinary(string a, string b) {
        if (b.length() > a.length()) {
            swap(a, b);
        }

        while (b.length() != a.length()) {
            b = "0" + b;
        }

        int carry = 0;
        string result;

        for (int i = a.length() - 1; i >= 0; --i) {
            int sum = int(a[i] - '0') + int(b[i] - '0');

            if (sum == 2) {
                if (carry == 0) {
                    result += "0";
                } else {
                    result += "1";
                }

                carry = 1;
            } else if (sum == 0) {
                if (carry == 0) {
                    result += "0";
                } else {
                    result += "1";
                    carry = 0;
                }
            } else if (sum == 1) {
                if (carry == 0) {
                    result += "1";
                } else {
                    result += "0";
                }
            }
        }

        if (carry) {
            result += "1";
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
