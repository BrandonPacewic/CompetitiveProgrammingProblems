class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint16_t ans = 0;

        while (n) {
            ans += n % 2;
            n >>= 1;
        }

        return ans;
    }
};
