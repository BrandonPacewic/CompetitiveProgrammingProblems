class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int64_t total = nums.size() * (nums.size() + 1) / 2;

        for (const auto& num : nums) {
            total -= num;
        }

        return total;
    }
};
