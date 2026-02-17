class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int , int> mp;
        vector<int> result;
        for(int num : nums) {
            mp[num]++;
        }
        for(auto &p : mp) {
            if(p.second == 2) {
                result.push_back(p.first);
            }
        }
        return result;
    }
};