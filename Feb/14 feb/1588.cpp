class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            int internalsum = 0;
            for (int j = i; j < n; j++) {
                internalsum = internalsum + arr[j];
                count++;
                if ((count % 2) != 0) {
                    sum = sum + internalsum;
                };
            };
        };

        return sum;
    }
};