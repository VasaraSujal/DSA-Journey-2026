class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int center= -1;
        for(int i=0;i<n;i++) {
            if(nums[i] == k) {
                center = i;
                break;
            }
        }
        if(center == -1) return 0;

        unordered_map<int, int> mp;
        mp[0] = 1;
        int ans = 0;
        int sum = 0;

        for(int i=center-1;i>=0;i--) {
            if(nums[i] < k) sum--;
            else if(nums[i] > k) sum++;
            mp[sum]++;
        }
        sum = 0;
        for(int i=center;i<n;i++) {
            if(nums[i] < k) sum--;
            else if(nums[i] > k) sum++;

            ans += mp[-sum] + mp[1-sum];
        }
        return ans;
    }
};