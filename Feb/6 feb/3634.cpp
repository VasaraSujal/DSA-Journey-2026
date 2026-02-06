class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 1;
        int maxelement = nums[0];
        int minelement = nums[0];
        int i = 0;
        int j = 0;
        while (j < n) {
            minelement = nums[i];
            maxelement = nums[j];
            while(i<j && maxelement > (long long)minelement * k){
                i++;
                minelement = nums[i];
            }
            l = max(l , j-i+1);
            j++;
        }
        return n-l;
    }
};