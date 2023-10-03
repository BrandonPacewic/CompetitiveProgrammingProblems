class Solution {
public:
    string baseNeg2(int n) {
        string output = "";

        while (n != 0) {
            int remainder = n % -2;
            n /= -2;

            if (remainder < 0) {
                remainder += 2;
                n += 1;
            }

            output = to_string(remainder) + output;
        }

        return output == "" ? "0" : output;        
    }
};
