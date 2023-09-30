class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> seen;
        vector<int> ans;

        for (int i = 0; i < nums.size(); ++i) {
            if (seen.count(nums[i])) {
                seen.erase(nums[i]);
                ans.push_back(nums[i]);
            } else {
                seen.insert(nums[i]);
            }
        }

        return ans;
    }
};
