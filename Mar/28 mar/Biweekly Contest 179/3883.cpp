class Solution {
public:
    const int MOD = 1e9 + 7;

    int digitsum1(int x) {
        int sum = 0;
        while (x) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
    int countArrays(vector<int>& digitSum) {
        int n = digitSum.size();

        vector<vector<int>> group(51);
        for(int i=0;i<=5000;i++) {
            int s = digitsum1(i);
            if(s <= 50) {
                group[s].push_back(i);
            }
        }
        vector<long long> dp(5001, 0), newdp(5001, 0);
        for(int x : group[digitSum[0]]) {
            dp[x] = 1;
        }
        for(int i=1;i<n;i++) {
            vector<long long> prefix(5001, 0);
            prefix[0] = dp[0];
            for(int j=1;j<=5000;j++) {
                prefix[j] = (prefix[j-1] + dp[j] % MOD);
            }
            fill(newdp.begin(), newdp.end(), 0);

            for(int x : group[digitSum[i]]) {
                newdp[x] = prefix[x];
            }
            dp = newdp;
        }

        long long ans = 0;
        for(int i=0;i<=5000;i++) {
            ans = (ans + dp[i]) % MOD;
        }
        return ans;
    }
};