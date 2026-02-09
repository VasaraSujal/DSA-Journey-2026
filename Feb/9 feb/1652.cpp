class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n);
        int sum = 0;

        for(int i = 0; i < n; i++) {

            if (k > 0) {
                for(int j = 1; j <= k; j++) {
                    int idx = (i + j) % n;
                    sum += code[idx];
                }
            }

            if (k < 0) {
                for(int j = -1; j >= k; j--) {
                    int idx = (i + j + n) % n;
                    sum += code[idx];
                }
            }

            result[i] = sum;
            sum = 0;
        }

        return result;
    }
};
