class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        int count_zeros = 0;

        int i = 0;
        int j = 0;

        while(j < n) {
            sum += nums[j];

            while(i < j && (nums[i] == 0 || sum > goal)) {

                if(nums[i] == 0) {
                    count_zeros++;
                }else{
                    count_zeros = 0;
                }

                sum -= nums[i];
                i++;
            }

            if(sum == goal) {
                count = count + 1 + count_zeros;
            }
            j++;
        }
        return count;
    }
};