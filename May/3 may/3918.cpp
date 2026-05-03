class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int ori = n;
        int rev = 0;

        while(n > 0) {
            rev = rev*10 + n % 10;
            n /= 10;
        }

        int start = min(ori, rev);
        int end = max(ori, rev);
        int sum = 0;

        for(int i=start;i<=end;i++) {
            if(i <= 1) continue;
            bool isPrime = true;
            for(int j=2;j<=sqrt(i);j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) sum += i;
        }  
        return sum; 
    }
};