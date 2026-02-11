class Solution {
public:
    int countPrimes(int n) {
        // Sieve of Eratosthenes :   
        // Time Complexity : O(nlog(logn))
        
        vector<bool> isPrime(n+1, true);
        for(int i = 2; i*i <= n; i++) {
            if(isPrime[i] == true) {
                for(int j = 2; i*j <= n; j++) {
                    isPrime[i*j] = false;
                }
            }
        }
        int count = 0;
        for(int i = 2; i < n; i++) {
            if(isPrime[i] == true) {
                count++;
            }
        }
        return count;
    }
};

// Time Limit Exceeded

//   Time Complexity : O(n*sqrt(n))

// int count = 0;
// for (int i = 2; i < n; i++) {
//     bool isPrime = true;
//     for (int j = 2; j * j <= i; j++) {
//         if (i % j == 0) {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime) {
//         count++;
//     }
// }
// return count;