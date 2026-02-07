class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int x : arr) {
            mp[x]++;
        }
        unordered_set<int> st;
        for(auto count : mp) {
            st.insert(count.second);
        }
        return mp.size() == st.size();
    }
};