class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0;
        int n = piles.size();
        int index = n - 1;
        sort(piles.begin(), piles.end());
        for(int i=0;i<n/3;i++) {
            ans += piles[index-1];
            index -= 2;
        }
        return ans;
    }
};