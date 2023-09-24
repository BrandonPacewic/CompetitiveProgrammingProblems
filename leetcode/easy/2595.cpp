class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> ans(2, 0);

        string binary = bitset<32>(n).to_string();

        for (int i = 0; i < binary.size(); ++i) {
            if (binary[i] == '1') {
                ++ans[i % 2];
            }
        }

        return ans;
    }
};
