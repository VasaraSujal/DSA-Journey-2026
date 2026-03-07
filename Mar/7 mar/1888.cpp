class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        s = (s + s);

        string s1;
        string s2;

        for (int i = 0; i < 2 * n; i++) {
            s1 += (i % 2 ? '0' : '1');
            s2 += (i % 2 ? '1' : '0');
        }

        int result = INT_MAX;
        int flip1 = 0;
        int flip2 = 0;

        int i = 0;
        int j = 0;

        while (j < 2 * n) {
            if (s[j] != s1[j]) {
                flip1++;
            }
            if (s[j] != s2[j]) {
                flip2++;
            }
            if (j - i + 1 > n) {
                if (s[i] != s1[i]) {
                    flip1--;
                }
                if (s[i] != s2[i]) {
                    flip2--;
                }
                i++;
            }
            if (j - i + 1 == n) {
                result = min({result, flip1, flip2});
            }
            j++;
        }
        return result;
    }
};



// int n = s.length();

// int result = INT_MAX;
// int flip1 = 0;
// int flip2 = 0;

// int i = 0;
// int j = 0;

// while (j < 2 * n) {

//     char expectedCharS1 = (j % 2) ? '1' : '0';
//     char expectedCharS2 = (j % 2) ? '0' : '1';

//     if (s[j % n] != expectedCharS1) {
//         flip1++;
//     }

//     if (s[j % n] != expectedCharS2) {
//         flip2++;
//     }

//     if (j - i + 1 > n) {
//         expectedCharS1 = (i % 2) ? '1' : '0';
//         expectedCharS2 = (i % 2) ? '0' : '1';

//         if (s[i % n] != expectedCharS1) {
//             flip1--;
//         }

//         if (s[i % n] != expectedCharS2) {
//             flip2--;
//         }

//         i++;
//     }

//     if (j - i + 1 == n) {
//         result = min({result, flip1, flip2});
//     }

//     j++;
// }
// return result;