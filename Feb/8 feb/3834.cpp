class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> result;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            long long x = nums[i];
            while(!result.empty() && result.back() == x) {
                x = 2*x;
                result.pop_back();
            }
            result.push_back(x);
        }
        
        return result;
    }
};