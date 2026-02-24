class Solution {
public:
    vector<int> countBits(int n) {
        // vector<int> result;
        // for(int i=0;i<=n;i++) {
        //     result.push_back(__builtin_popcount(i));
        // }
        // return result;

        vector<int> result;
        for(int i=0;i<=n;i++) {
            int sum = 0;
            int curr = i;
            while(curr > 0) {
                int bit = curr % 2;
                sum += bit;
                curr /= 2;
            }
            result.push_back(sum);
        }
        return result;

    }
};