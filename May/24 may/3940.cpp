class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> ans;
        ans.push_back(nums[0]);

        int count = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count = count + 1;
                if (count <= k) {
                    ans.push_back(nums[i]);
                }
            }

            else {
                count = 1;
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};