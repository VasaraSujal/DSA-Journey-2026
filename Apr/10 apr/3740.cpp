class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int minDis = INT_MAX;
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        for (auto& p : mp) {
            if (p.second >= 3) {
                vector<int> indices;

                for (int x = 0; x < nums.size(); x++) {
                    if (nums[x] == p.first) {
                        indices.push_back(x);
                    }
                }

                for (int a = 0; a < indices.size(); a++) {
                    for (int b = a + 1; b < indices.size(); b++) {
                        for (int c = b + 1; c < indices.size(); c++) {

                            int i = indices[a];
                            int j = indices[b];
                            int k = indices[c];

                            int dis = abs(i - j) + abs(j - k) + abs(k - i);
                            minDis = min(minDis, dis);
                        }
                    }
                }
            }
        }

        return minDis == INT_MAX ? -1 : minDis;
    }
};