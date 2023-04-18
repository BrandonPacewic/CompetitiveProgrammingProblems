class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> used;

        for (const auto& x : nums) {
            if (used.count(x)) {
                return true;
            } else {
                used.insert(x);
            }
        }

        return false;
    }
};
