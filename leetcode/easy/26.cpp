class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> used(nums.begin(), nums.end());
        nums.clear();

        for (auto& x : used) {
            nums.push_back(x);
        }

        return used.size();
    }
};
