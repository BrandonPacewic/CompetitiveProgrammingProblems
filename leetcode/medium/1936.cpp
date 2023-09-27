class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int count = 0;

        if (rungs.front() > dist) {
            count += (rungs.front() - 1) / dist;
            
        }

        for (int i = 0; i < rungs.size() - 1; ++i) {
            if (rungs[i + 1] - rungs[i] > dist) {
                count += (rungs[i + 1] - rungs[i] - 1) / dist;
            }
        }

        return count;
    }
};
