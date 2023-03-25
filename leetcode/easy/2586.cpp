class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        const set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        int count = 0;

        for (int i = left; i <= right; ++i) {
            if (vowels.find(words[i].front()) != vowels.end() && vowels.find(words[i].back()) != vowels.end()) {
                ++count;
            }
        }

        return count;
    }
};
