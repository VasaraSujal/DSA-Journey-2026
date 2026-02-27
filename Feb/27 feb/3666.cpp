class Solution {
public:
    int minOperations(string s, int k) {
        int n = s.size();
        int zeros = 0;
        for (char c : s) {
            zeros += (c == '0');
        }

        if (zeros == 0)
            return 0;

        if (n == k)
            return (zeros == n) ? 1 : -1;

        int other = n - k;

        int oddOps =
            max((zeros + k - 1) / k, ((n - zeros) + other - 1) / other);

        if (oddOps % 2 == 0)
            oddOps++;

        int evenOps = max((zeros + k - 1) / k, (zeros + other - 1) / other);
        if (evenOps % 2 == 1)
            evenOps++;

        int ans = INT_MAX;

        if ((k % 2) == (zeros % 2))
            ans = min(ans, oddOps);

        if (zeros % 2 == 0)
            ans = min(ans, evenOps);

        return ans == INT_MAX ? -1 : ans;
    }
};