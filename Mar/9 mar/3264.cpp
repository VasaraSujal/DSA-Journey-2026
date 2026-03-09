class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++) {
            int minimum = *min_element(nums.begin(), nums.end());
            int index = 0;
            for(int i=0;i<nums.size();i++) {
                if(nums[i] == minimum) {
                    index = i;
                    break;
                }
            }
            nums[index] *= multiplier;
        }
        return nums;
    }
};