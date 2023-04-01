class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;

        for (const auto& x : nums) {
            ++counter[x];

            if (counter[x] > nums.size() / 2) {
                return x;
            }
        }

        return -1;
    }
};
