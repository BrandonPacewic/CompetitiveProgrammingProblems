class Solution {
public:
    bool isHappy(int n) {
        set<int> used;

        for (;;) {
            string str = to_string(n);
            int new_n = 0;

            for (const auto& ch : str) {
                int ch_num = int(ch - '0');
                new_n += ch_num * ch_num;
            }

            if (new_n == 1) {
                return true;
            } else if (used.find(new_n) != used.end()) {
                return false;
            } else {
                used.insert(new_n);
                n = new_n;
            }
        }
    }
};
