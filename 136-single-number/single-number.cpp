class Solution {
public:
    int singleNumber(vector<int>& a) {
        unordered_map<int, int> cnt;

        // Count frequencies
        for (int n : a) {
            cnt[n]++;
        }

        // Find number with frequency 1
        for (auto &pair : cnt) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return -1;
    }
};
