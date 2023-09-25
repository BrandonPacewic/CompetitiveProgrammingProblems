class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeros = count(arr.begin(), arr.end(), 0);

        for (int i = arr.size() - 1; i >= 0; --i) {
            if (arr[i] == 0) {
                --zeros;
            }

            if (i + zeros < arr.size()) {
                arr[i + zeros] = arr[i];

                if (arr[i] == 0 && i + zeros + 1 < arr.size()) {
                    arr[i + zeros + 1] = 0;
                }
            }
        }
    }
};
