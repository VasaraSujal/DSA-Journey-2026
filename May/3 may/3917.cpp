class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            int count = 0;
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i] % 2 == 0) {
                    if(nums[j] % 2 != 0) count++;
                }else{
                    if(nums[j] % 2 == 0) count++;
                }
            }
            nums[i] = count;
        }
        return nums;
    }
};