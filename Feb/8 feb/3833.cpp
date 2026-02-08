class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return 0;
        int count = 0;
        double sum = nums[n-1];
        for(int i=n-2;i>=0;i--) {
            int temp = nums[i];
            int newSize = n-i-1;
            if((double)temp > (sum/newSize)) {
                count++;
            }
            sum += nums[i];
        }
        return count;
    }
};