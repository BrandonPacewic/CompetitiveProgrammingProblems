class Solution {
public:
    int mySqrt(int x) {
        int64_t low = min(1, x);
        int64_t high = max(1, x);
        int64_t mid = -1;

        while (100 * low * low < x) {
            low += 10;
        }

        while (0.01 * high * high > x) {
            high *= 0.1;
        }

        for (int i = 0; i < 100; ++i) {
            mid = static_cast<int64_t>((low + high) / 2);

            if (mid * mid == x) {
                return mid;
            } else if (mid * mid > x) {
                high = mid;
            } else {
                low = mid;
            }
        }

        return static_cast<int>(mid);
    }
};
