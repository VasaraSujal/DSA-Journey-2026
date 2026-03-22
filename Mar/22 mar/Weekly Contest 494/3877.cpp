class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> dp;
        dp[0] = 0;
        for(int num : nums) {
            auto temp = dp;
            for(auto &it : dp) {
                int x = it.first;
                int count = it.second;
                int newXor = x ^ num;
                temp[newXor] = max(temp[newXor], count+1);
            }
            dp = temp;
        }
        if(dp.find(target) == dp.end()) {
            return -1;
        }
        return n-dp[target];
    }
};