class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int count1 = 0;
        int count2 = 0;
        int zeroIndex;

        if(s[0] == '0') {
            zeroIndex = 0;
        } else {
            zeroIndex = 1;
        }

        if(zeroIndex == 0) {
            for(int i=0;i<n;i+=2) {
                if(s[i] != '0') {
                    count1++;
                }
            }
            for(int i=1;i<n;i+=2) {
                if(s[i] != '1') {
                    count1++;
                }
            }
        } else {
            for(int i=0;i<n;i+=2) {
                if(s[i] != '1') {
                    count1++;
                }
            }
            for(int i=1;i<n;i+=2) {
                if(s[i] != '0') {
                    count1++;
                }
            }
        }

        count2 = n - count1;

        return min(count1, count2);
    }
};