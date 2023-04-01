class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        uint16_t loops = 0;

        while (n) {
            result += (n % 2) << (31 - loops);
            n >>= 1;
            ++loops;
        }

        return result;
    }
};
