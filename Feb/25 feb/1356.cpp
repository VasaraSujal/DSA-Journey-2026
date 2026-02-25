class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        // vector<pair<int, int>> vec;
        // for (int x : arr) {
        //     vec.push_back({__builtin_popcount(x), x});
        // }

        // sort(vec.begin(), vec.end());

        // vector<int> ans;
        // for (auto& p : vec) {
        //     ans.push_back(p.second);
        // }
        // return ans;

        sort(arr.begin(), arr.end());

        vector<int> result;
        int j = 0;
        int count = 0;

        while (count < arr.size()) {
            for (int i = 0; i < arr.size(); i++) {
                if (__builtin_popcount(arr[i]) == j) {
                    result.push_back(arr[i]);
                    count++;
                }
            }
            j++;
        }

        return result;
    }
};