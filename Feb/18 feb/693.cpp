class Solution {
public:
    bool hasAlternatingBits(int n) {

        // Approach - 1 :

        bitset<32> b(n);
        int bits = log2(n);
        for(int i=0;i<=bits;i++) {
            if(b[i] == b[i+1]) return false;
        }
        return true;

        // Approach - 2 :

        // int current_bit = n%2;
        // n = n/2;
        // while(n > 0) {
        //     if(current_bit == n%2) {
        //         return false;
        //     }
        //     current_bit = n%2;
        //     n /= 2;
        // }
        // return true;

        // Approach - 3 :

        // int result = n ^ (n >> 1);
        // return (result & (result+1)) == 0;
    }
};