class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]].push_back(i);
        }

        vector<int> result;

        for(int qi : queries) {
            int ele = nums[qi];
            vector<int>& vec = mp[ele];

            int sz = vec.size();
            if(sz == 1) {
                result.push_back(-1);
                continue;
            }

            int pos = lower_bound(begin(vec), end(vec), qi) - begin(vec);
            int res = INT_MAX;

            int right = vec[(pos+1) % sz];
            int d = abs(qi - right);
            int circularDis = n-d;
            res = min({res, d, circularDis});

            int left = vec[(pos+-1+sz) % sz];
            d = abs(qi - left);
            circularDis = n-d;
            res = min({res, d, circularDis});

            result.push_back(res);
        }

        return result;
    }
};