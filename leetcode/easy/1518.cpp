class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;

        while (numBottles >= numExchange) {
            int extra = numBottles % numExchange;
            numBottles = static_cast<int>(numBottles / numExchange);
            ans += numBottles;
            numBottles += extra;
        }

        return ans;
    }
};
