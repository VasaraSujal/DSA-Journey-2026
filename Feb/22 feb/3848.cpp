class Solution {
public:
    bool isDigitorialPermutation(int n) {
        long long sum = 0;
        int num = n;
        int ori = n;
        vector<int> freq1(10, 0);
        vector<int> freq2(10, 0);
        while(num > 0) {
            int digit = num%10;
            long long fac = 1;
            for(int i=1;i<=digit;i++) {
                fac *= i;
            }
            sum += fac;
            num = num/10;
        }
        int temp = ori;
        while(temp > 0) {
            freq1[temp%10]++;
            temp /= 10;
        }
        long long s = sum;
        while(s > 0) {
            freq2[s%10]++;
            s /= 10;
        }
        return freq1 == freq2;
    }
};