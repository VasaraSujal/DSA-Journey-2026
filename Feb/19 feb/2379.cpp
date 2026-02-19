class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minimum = INT_MAX;
        for(int i=0;i<=blocks.length()-k;i++) {
            int white = 0;
            for(int j=i;j<i+k;j++) {
                if(blocks[j] == 'W') {
                    white++;
                }
            }
            minimum = min(minimum , white);
        }
        return minimum;
    }
};