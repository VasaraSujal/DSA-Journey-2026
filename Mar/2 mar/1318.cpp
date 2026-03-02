class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
        while (a != 0 || b != 0 || c != 0) {
            if ((c & 1) == 1) {
                if ((a & 1) == 0 && (b & 1) == 0) {
                    flips++;
                }
            } else {
                if ((a & 1) == 1)
                    flips++;
                if ((b & 1) == 1)
                    flips++;
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return flips;
    }
};

// int ans = 0;
// for (long i = 0; i <= 30; i++) {
//     long d1 = a & 1;
//     long d2 = b & 1;
//     long d3 = c & 1;
//     if (d3 == 0) {
//         ans += d1 + d2;
//     } else {
//         if (d1 == 0 && d2 == 0)
//             ans++;
//     }
//     a /= 2;
//     b /= 2;
//     c /= 2;
// }
// return ans;