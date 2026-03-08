class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        const long long LIMIT = 2e14;
        vector<long long> suffix(n+1, 1);
        for(int i=n-1;i>=0;i--) {
            if(suffix[i+1] > LIMIT / nums[i]) {
                suffix[i] = LIMIT;
            }
            else{
                suffix[i] = suffix[i+1] * nums[i];
            }
        }
        long long leftSum = 0;
        for(int i=0;i<n;i++) {
            long long rightProduct = suffix[i+1];
            if(leftSum == rightProduct) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};