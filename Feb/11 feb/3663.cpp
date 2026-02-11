class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> mp;
        int digit = 0;
        if (n == 0) {
            return 0;
        }
        while (n != 0) {
            digit = n % 10;
            n /= 10;
            mp[digit]++;
        }
        int minFreq = INT_MAX;
        int ans = 10;
        for (auto &p : mp) {
            if (p.second < minFreq) {
                minFreq = p.second;
                ans = p.first;
            }
            else if (p.second == minFreq) {
                ans = min(ans, p.first);
            }
        }
        return ans;
    }
};
